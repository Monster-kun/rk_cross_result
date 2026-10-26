#pragma once

#include <vector>
#include <eigen3/Eigen/Dense>
#include <eigen3/Eigen/Core>

constexpr double PI = 3.1415926;
typedef Eigen::Matrix<double, 2, 6> CoefficientMat;
typedef Eigen::Matrix<double, 2, 5> VelCoefficientMat;
typedef Eigen::Matrix<double, 2, 4> AccCoefficientMat;

class Piece
{
private:  // duration + coeffMat
    double duration;
    CoefficientMat coeffMat;

    //@yuwei
    int dim = 2;
    int order = 5;

public:
    Piece() = default;

    Piece(double dur, const CoefficientMat &cMat)
        : duration(dur), coeffMat(cMat){}
    //@yuwei
    inline int getDim() const
    {
        return dim;
    }
    //@yuwei
    inline int getOrder() const
    {
        return order;
    }

    inline double getDuration() const
    {
        return duration;
    }

    inline const CoefficientMat &getCoeffMat() const
    {
        return coeffMat;
    }

    inline VelCoefficientMat getVelCoeffMat() const
    {
        VelCoefficientMat velCoeffMat;
        int n = 1;
        for (int i = 4; i >= 0; i--)
        {
            velCoeffMat.col(i) = n * coeffMat.col(i);
            n++;
        }
        return velCoeffMat;
    }

    // the point in the rear axle center
    inline Eigen::Vector2d getPos(const double &t) const
    {
        Eigen::Vector2d pos(0.0, 0.0);
        double tn = 1.0;
        for (int i = order; i >= 0; i--)
        {
            pos += tn * coeffMat.col(i);
            tn *= t;
        }
        return pos;
    }

    inline Eigen::Vector2d getVel(const double &t) const
    {
        Eigen::Vector2d vel(0.0, 0.0);
        double tn = 1.0;
        int n = 1;

        for (int i = order-1; i >= 0; i--)
        {
            vel += n * tn * coeffMat.col(i);
            tn *= t;
            n++;
        }
        return vel;
    }

    inline Eigen::Vector2d getAcc(const double &t) const
    {
        Eigen::Vector2d acc(0.0, 0.0);
        double tn = 1.0;
        int m = 1;
        int n = 2;

        for (int i = order-2; i >= 0; i--)
        {
            acc += m * n * tn * coeffMat.col(i);
            tn *= t;
            m++;
            n++;
        }
        return acc;
    }

    inline Eigen::Vector2d getJer(const double &t) const
    {
        Eigen::Vector2d jer(0.0, 0.0);
        double tn = 1.0;
        int l = 1;
        int m = 2;
        int n = 3;

        for (int i = order-3; i >= 0; i--)
        {
            jer += l * m * n * tn * coeffMat.col(i);

            tn *= t;
            l++;
            m++;
            n++;
        }

        return jer;
    }

    inline double getAngle(const double &t) const
    {
        Eigen::Vector2d vel = getVel(t);
        return std::atan2(vel(1),vel(0)); //[-PI, PI]
    }

    inline double getCurv(const double &t) const
    {
        Eigen::Vector2d dsigma  = getVel(t);
        Eigen::Vector2d ddsigma = getAcc(t);
        
        if (dsigma.norm() < 1e-6){
            return 0.0;
        }else{
            return (dsigma(0)*ddsigma(1)-dsigma(1)*ddsigma(0))/ std::pow(dsigma.norm(), 3);
        }
    }

    inline CoefficientMat normalizePosCoeffMat() const
    {
        CoefficientMat nPosCoeffsMat;
        double t = 1.0;
        for (int i = order; i >= 0; i--)
        {
            nPosCoeffsMat.col(i) = coeffMat.col(i) * t;
            t *= duration;
        }
        return nPosCoeffsMat;
    }
};

class Trajectory
{
private:
    typedef std::vector<Piece> Pieces;
    Pieces pieces;

public:
    Trajectory() = default;
    Trajectory(const std::vector<double> &durs,
            const std::vector<CoefficientMat> &cMats)
    {
        int N = std::min(durs.size(), cMats.size());
        pieces.reserve(N);
        for (int i = 0; i < N; i++)
        {
            pieces.emplace_back(durs[i], cMats[i]);
        }
    }    

    inline int getPieceNum() const
    {
        return pieces.size();
    }
    
    inline bool empty() const
    {
        return pieces.empty();
    }

    inline Eigen::MatrixXd getPositions() const
    {
        int N = getPieceNum();
        Eigen::MatrixXd positions(2, N + 1);
        for (int i = 0; i < N; i++)
        {
            positions.col(i) = pieces[i].getCoeffMat().col(5);
        }
        positions.col(N) = pieces[N - 1].getPos(pieces[N - 1].getDuration());
        return positions;
    }

    inline Eigen::VectorXd getDurations() const
    {
        int N = getPieceNum();
        Eigen::VectorXd durations(N);
        for (int i = 0; i < N; i++)
        {
            durations(i) = pieces[i].getDuration();
        }
        return durations;
    }

    inline double getTotalDuration() const
    {
        int N = getPieceNum();
        double totalDuration = 0.0;
        for (int i = 0; i < N; i++)
        {
            totalDuration += pieces[i].getDuration();
        }
        return totalDuration;
    }

    inline const Piece &operator[](int i) const
    {
        return pieces[i];
    }

    inline Piece &operator[](int i)
    {
        return pieces[i];
    }

    inline void clear(void)
    {
        pieces.clear();
        return;
    }

    inline Pieces::const_iterator begin() const
    {
        return pieces.begin();
    }

    inline Pieces::const_iterator end() const
    {
        return pieces.end();
    }

    inline Pieces::iterator begin()
    {
        return pieces.begin();
    }

    inline Pieces::iterator end()
    {
        return pieces.end();
    }

    inline void reserve(const int &n)
    {
        pieces.reserve(n);
        return;
    }

    inline void emplace_back(const Piece &piece)
    {
        pieces.emplace_back(piece);
        return;
    }

    inline void emplace_back(const double &dur,
                            const CoefficientMat &cMat)
    {
        pieces.emplace_back(dur, cMat);
        return;
    }

    inline void append(const Trajectory &traj)
    {
        pieces.insert(pieces.end(), traj.begin(), traj.end());
        return;
    }

    inline int locatePieceIdx(double &t) const
    {
        int N = getPieceNum();
        int idx;
        double dur;
        for (idx = 0;
            idx < N &&
            t > (dur = pieces[idx].getDuration());
            idx++)
        {
            t -= dur;
        }
        if (idx == N)
        {
            idx--;
            t += pieces[idx].getDuration();
        }
        return idx;
    }

    inline Eigen::Vector2d getPos(double t) const
    {
        int pieceIdx = locatePieceIdx(t);
        return pieces[pieceIdx].getPos(t);
    }
    inline Eigen::Vector2d getdSigma(double t) const //velocity in x,y
    {
        int pieceIdx = locatePieceIdx(t);
        return pieces[pieceIdx].getVel(t);
    }
    inline Eigen::Vector2d getddSigma(double t) const //acceleration in x,y
    {
        int pieceIdx = locatePieceIdx(t);
        return pieces[pieceIdx].getAcc(t);
    }
    inline double getVel(double t) const
    {
        int pieceIdx = locatePieceIdx(t);
        return pieces[pieceIdx].getVel(t).norm();
    }

    inline double getAcc(double t) const
    {
        int pieceIdx = locatePieceIdx(t);
        return pieces[pieceIdx].getAcc(t).norm();
    }

    inline double getAngle(double t) const
    {
        int pieceIdx = locatePieceIdx(t);
        return pieces[pieceIdx].getAngle(t);
    }

    inline double getCurv(double t) const
    {
        int pieceIdx = locatePieceIdx(t);
        return pieces[pieceIdx].getCurv(t);
    }
};

// The banded system class is used for solving
// banded linear system Ax=b efficiently.
// A is an N*N band matrix with lower band width lowerBw
// and upper band width upperBw.
// Banded LU factorization has O(N) time complexity.
class BandedSystem
{
public:
    // The size of A, as well as the lower/upper
    // banded width p/q are needed
    inline void create(const int &n, const int &p, const int &q)
    {
        // In case of re-creating before destroying
        destroy();
        N = n;
        lowerBw = p;
        upperBw = q;
        int actualSize = N * (lowerBw + upperBw + 1);
        ptrData = new double[actualSize];
        std::fill_n(ptrData, actualSize, 0.0);
        return;
    }

    inline void destroy()
    {
        if (ptrData != nullptr)
        {
            delete[] ptrData;
            ptrData = nullptr;
        }
        return;
    }

private:
    int N;
    int lowerBw;
    int upperBw;
    // Compulsory nullptr initialization here
    double *ptrData = nullptr;

public:
    // Reset the matrix to zero
    inline void reset(void)
    {
        std::fill_n(ptrData, N * (lowerBw + upperBw + 1), 0.0);
        return;
    }

    // The band matrix is stored as suggested in "Matrix Computation"
    inline const double &operator()(const int &i, const int &j) const
    {
        return ptrData[(i - j + upperBw) * N + j];
    }

    inline double &operator()(const int &i, const int &j)
    {
        return ptrData[(i - j + upperBw) * N + j];
    }

    // This function conducts banded LU factorization in place
    // Note that NO PIVOT is applied on the matrix "A" for efficiency!!!
    inline void factorizeLU()
    {
        int iM, jM;
        double cVl;
        for (int k = 0; k <= N - 2; k++)
        {
            iM = std::min(k + lowerBw, N - 1);
            cVl = operator()(k, k);
            for (int i = k + 1; i <= iM; i++)
            {
                if (operator()(i, k) != 0.0)
                {
                    operator()(i, k) /= cVl;
                }
            }
            jM = std::min(k + upperBw, N - 1);
            for (int j = k + 1; j <= jM; j++)
            {
                cVl = operator()(k, j);
                if (cVl != 0.0)
                {
                    for (int i = k + 1; i <= iM; i++)
                    {
                        if (operator()(i, k) != 0.0)
                        {
                            operator()(i, j) -= operator()(i, k) * cVl;
                        }
                    }
                }
            }
        }
        return;
    }

    // This function solves Ax=b, then stores x in b
    // The input b is required to be N*m, i.e.,
    // m vectors to be solved.
    inline void solve(Eigen::MatrixXd &b) const
    {
        int iM;
        for (int j = 0; j <= N - 1; j++)
        {
            iM = std::min(j + lowerBw, N - 1);
            for (int i = j + 1; i <= iM; i++)
            {
                if (operator()(i, j) != 0.0)
                {
                    b.row(i) -= operator()(i, j) * b.row(j);
                }
            }
        }
        for (int j = N - 1; j >= 0; j--)
        {
            b.row(j) /= operator()(j, j);
            iM = std::max(0, j - upperBw);
            for (int i = iM; i <= j - 1; i++)
            {
                if (operator()(i, j) != 0.0)
                {
                    b.row(i) -= operator()(i, j) * b.row(j);
                }
            }
        }
        return;
    }

    // This function solves ATx=b, then stores x in b
    // The input b is required to be N*m, i.e.,
    // m vectors to be solved.
    inline void solveAdj(Eigen::MatrixXd &b) const
    {
        int iM;
        for (int j = 0; j <= N - 1; j++)
        {
            b.row(j) /= operator()(j, j);
            iM = std::min(j + upperBw, N - 1);
            for (int i = j + 1; i <= iM; i++)
            {
                if (operator()(j, i) != 0.0)
                {
                    b.row(i) -= operator()(j, i) * b.row(j);
                }
            }
        }
        for (int j = N - 1; j >= 0; j--)
        {
            iM = std::max(0, j - lowerBw);
            for (int i = iM; i <= j - 1; i++)
            {
                if (operator()(j, i) != 0.0)
                {
                    b.row(i) -= operator()(j, i) * b.row(j);
                }
            }
        }
        return;
    }
};

class MinJerkOpt
{
public:
    MinJerkOpt() = default;
    ~MinJerkOpt() {A.destroy();}

    int N; // number of segments
    Eigen::MatrixXd headPVA; // initial PVA only x,y
    Eigen::MatrixXd tailPVA; // final PVA only x,y

    BandedSystem A;
    Eigen::MatrixXd b;

    Eigen::VectorXd T1;
    Eigen::VectorXd T2;
    Eigen::VectorXd T3;
    Eigen::VectorXd T4;
    Eigen::VectorXd T5;

    Eigen::MatrixXd gdC;

    inline void reset(const Eigen::MatrixXd &headState,
                    const Eigen::MatrixXd &tailState,
                    const int &pieceNum)
    {
        N = pieceNum;
        headPVA = headState;
        tailPVA = tailState;
        T1.resize(N);
        T2.resize(N);
        T3.resize(N);
        T4.resize(N);
        T5.resize(N);

        A.create(6 * N, 6, 6);
        b.resize(6 * N, 2); //coefficient
        gdC.resize(6 * N, 2);
        return;
    }

    inline void generate(const Eigen::MatrixXd &inPs,
                        const Eigen::VectorXd &ts)
    {
        T1 = ts;
        T2 = T1.cwiseProduct(T1);
        T3 = T2.cwiseProduct(T1);
        T4 = T2.cwiseProduct(T2);
        T5 = T4.cwiseProduct(T1);

        A.reset();
        b.setZero();

        A(0, 0) = 1.0;
        A(1, 1) = 1.0;
        A(2, 2) = 2.0;
        b.row(0) = headPVA.col(0).transpose();
        b.row(1) = headPVA.col(1).transpose();
        b.row(2) = headPVA.col(2).transpose();

        for (int i = 0; i < N - 1; i++)
        {
            A(6 * i + 3, 6 * i + 3) = 6.0;
            A(6 * i + 3, 6 * i + 4) = 24.0 * T1(i);
            A(6 * i + 3, 6 * i + 5) = 60.0 * T2(i);
            A(6 * i + 3, 6 * i + 9) = -6.0;
            A(6 * i + 4, 6 * i + 4) = 24.0;
            A(6 * i + 4, 6 * i + 5) = 120.0 * T1(i);
            A(6 * i + 4, 6 * i + 10) = -24.0;
            A(6 * i + 5, 6 * i) = 1.0;
            A(6 * i + 5, 6 * i + 1) = T1(i);
            A(6 * i + 5, 6 * i + 2) = T2(i);
            A(6 * i + 5, 6 * i + 3) = T3(i);
            A(6 * i + 5, 6 * i + 4) = T4(i);
            A(6 * i + 5, 6 * i + 5) = T5(i);
            A(6 * i + 6, 6 * i) = 1.0;
            A(6 * i + 6, 6 * i + 1) = T1(i);
            A(6 * i + 6, 6 * i + 2) = T2(i);
            A(6 * i + 6, 6 * i + 3) = T3(i);
            A(6 * i + 6, 6 * i + 4) = T4(i);
            A(6 * i + 6, 6 * i + 5) = T5(i);
            A(6 * i + 6, 6 * i + 6) = -1.0;
            A(6 * i + 7, 6 * i + 1) = 1.0;
            A(6 * i + 7, 6 * i + 2) = 2 * T1(i);
            A(6 * i + 7, 6 * i + 3) = 3 * T2(i);
            A(6 * i + 7, 6 * i + 4) = 4 * T3(i);
            A(6 * i + 7, 6 * i + 5) = 5 * T4(i);
            A(6 * i + 7, 6 * i + 7) = -1.0;
            A(6 * i + 8, 6 * i + 2) = 2.0;
            A(6 * i + 8, 6 * i + 3) = 6 * T1(i);
            A(6 * i + 8, 6 * i + 4) = 12 * T2(i);
            A(6 * i + 8, 6 * i + 5) = 20 * T3(i);
            A(6 * i + 8, 6 * i + 8) = -2.0;

            b.row(6 * i + 5) = inPs.col(i).transpose();
        }

        A(6 * N - 3, 6 * N - 6) = 1.0;
        A(6 * N - 3, 6 * N - 5) = T1(N - 1);
        A(6 * N - 3, 6 * N - 4) = T2(N - 1);
        A(6 * N - 3, 6 * N - 3) = T3(N - 1);
        A(6 * N - 3, 6 * N - 2) = T4(N - 1);
        A(6 * N - 3, 6 * N - 1) = T5(N - 1);
        A(6 * N - 2, 6 * N - 5) = 1.0;
        A(6 * N - 2, 6 * N - 4) = 2 * T1(N - 1);
        A(6 * N - 2, 6 * N - 3) = 3 * T2(N - 1);
        A(6 * N - 2, 6 * N - 2) = 4 * T3(N - 1);
        A(6 * N - 2, 6 * N - 1) = 5 * T4(N - 1);
        A(6 * N - 1, 6 * N - 4) = 2;
        A(6 * N - 1, 6 * N - 3) = 6 * T1(N - 1);
        A(6 * N - 1, 6 * N - 2) = 12 * T2(N - 1);
        A(6 * N - 1, 6 * N - 1) = 20 * T3(N - 1);

        b.row(6 * N - 3) = tailPVA.col(0).transpose();
        b.row(6 * N - 2) = tailPVA.col(1).transpose();
        b.row(6 * N - 1) = tailPVA.col(2).transpose();

        A.factorizeLU();
        A.solve(b);
                    
        return;
    }

    inline double getTrajJerkCost() const
    {
        //jerk = Tr{c^T * integral(beta(s阶)*beta(s阶)^T) * c}
        //其中beta(s阶)是关于t的s阶导数
        //J = [ci  ]      [0  0   0   0   0   0]
        //    [ci+1]      [0  0   0   0   0   0]
        //    [ci+2]      [0  0   0   0   0   0]
        //    [ci+3]^T *  [0  0   0   36t   72t^2   120t^3]   * c
        //    [ci+4]      [0  0   0   72t^2  192t^3   360t^4]
        //    [ci+5]      [0  0   0   120t^3 360t^4   720t^5]
        double objective = 0.0;
        for (int i = 0; i < N; i++)
        {
            objective += 36.0 * b.row(6 * i + 3).squaredNorm() * T1(i) +
                        144.0 * b.row(6 * i + 4).dot(b.row(6 * i + 3)) * T2(i) +
                        192.0 * b.row(6 * i + 4).squaredNorm() * T3(i) +
                        240.0 * b.row(6 * i + 5).dot(b.row(6 * i + 3)) * T3(i) +
                        720.0 * b.row(6 * i + 5).dot(b.row(6 * i + 4)) * T4(i) +
                        720.0 * b.row(6 * i + 5).squaredNorm() * T5(i);
        }
        return objective;
    }
    
    template <typename EIGENVEC>
    inline void getTrajJerkGrad2CT(EIGENVEC & gdT)
    {
        gdT.setZero();
        gdC.setZero();
        getTrajJerkGradbyT(gdT);
        getTrajJerkGradbyC(gdC);
        return;
    }

    //propagte (c,T) gradient to (P,T) gradient
    template <typename EIGENVEC, typename EIGENMAT>
    inline void getGrad2PT(EIGENVEC &gdT, EIGENMAT &gdP)
    {;
        A.solveAdj(gdC);
        propagteCtoT(gdC, gdT);
        propagteCtoP(gdC, gdP);
        return;
    }
    
    inline Trajectory getTrajectory() const
    {
        Trajectory traj;
        traj.reserve(N);
        for (int i = 0; i < N; i++)
        {
            traj.emplace_back(T1(i), b.block<6, 2>(6 * i, 0).transpose().rowwise().reverse());
        }
        return traj;
    }

    inline const Eigen::VectorXd &get_T1() const { return T1; }
    inline const Eigen::MatrixXd &get_b() const { return b; }
    inline Eigen::MatrixXd &get_gdC() { return gdC; }
private:
    template <typename EIGENVEC>
    inline void getTrajJerkGradbyT(EIGENVEC &gdT) const
    {
        // dJ/dTi = ci^T * beta(s阶)(Ti) * beta(s阶)(Ti)^T * ci
        //        = ci^T * R(Ti) * ci
        //R(ti) = [0  0   0   0   0   0]
        //        [0  0   0   0   0   0]
        //        [0  0   0   0   0   0]
        //        [0  0   0   36t   144t   360t^2]
        //        [0  0   0   144t  576t^2 1440t^3]
        //        [0  0   0   360t^2 1440t^3 3600t^4]
        for (int i = 0; i < N; i++){
            gdT(i) += 36.0 * b.row(6 * i + 3).squaredNorm() +
                    288.0 * b.row(6 * i + 4).dot(b.row(6 * i + 3)) * T1(i) +
                    576.0 * b.row(6 * i + 4).squaredNorm() * T2(i) +
                    720.0 * b.row(6 * i + 5).dot(b.row(6 * i + 3)) * T2(i) +
                    2880.0 * b.row(6 * i + 5).dot(b.row(6 * i + 4)) * T3(i) +
                    3600.0 * b.row(6 * i + 5).squaredNorm() * T4(i);
        }
        return;
    }

    template <typename EIGENMAT>
    inline void getTrajJerkGradbyC(EIGENMAT &gdC) const
    {
        // dJ/dCi = 2 * Q(Ti) * ci
        //Q(Ti) = [0  0   0   0   0   0]
        //        [0  0   0   0   0   0]
        //        [0  0   0   0   0   0]
        //        [0  0   0   36t   72t^2   120t^3]
        //        [0  0   0   72t^2  192t^3   360t^4]
        //        [0  0   0   120t^3 360t^4   720t^5]
        for (int i = 0; i < N; i++)
        {
            gdC.row(6 * i + 5) += 240.0 * b.row(6 * i + 3) * T3(i) +
                                720.0 * b.row(6 * i + 4) * T4(i) +
                                1440.0 * b.row(6 * i + 5) * T5(i);
            gdC.row(6 * i + 4) += 144.0 * b.row(6 * i + 3) * T2(i) +
                                384.0 * b.row(6 * i + 4) * T3(i) +
                                720.0 * b.row(6 * i + 5) * T4(i);
            gdC.row(6 * i + 3) += 72.0 * b.row(6 * i + 3) * T1(i) +
                                144.0 * b.row(6 * i + 4) * T2(i) +
                                240.0 * b.row(6 * i + 5) * T3(i);
        }
        return;        
    }

    template <typename EIGENVEC>
    inline void propagteCtoT(const Eigen::MatrixXd &adj_gdC, EIGENVEC &gdT)
    {
        Eigen::MatrixXd B1(6, 2), B2(3, 2);

        Eigen::RowVector2d negVel, negAcc, negJer, negSnp, negCrk;

        for (int i = 0; i < N - 1; i++)
        {
            negVel = -(b.row(i * 6 + 1) +
                    2.0 * T1(i) * b.row(i * 6 + 2) +
                    3.0 * T2(i) * b.row(i * 6 + 3) +
                    4.0 * T3(i) * b.row(i * 6 + 4) +
                    5.0 * T4(i) * b.row(i * 6 + 5));
            negAcc = -(2.0 * b.row(i * 6 + 2) +
                    6.0 * T1(i) * b.row(i * 6 + 3) +
                    12.0 * T2(i) * b.row(i * 6 + 4) +
                    20.0 * T3(i) * b.row(i * 6 + 5));
            negJer = -(6.0 * b.row(i * 6 + 3) +
                    24.0 * T1(i) * b.row(i * 6 + 4) +
                    60.0 * T2(i) * b.row(i * 6 + 5));
            negSnp = -(24.0 * b.row(i * 6 + 4) +
                    120.0 * T1(i) * b.row(i * 6 + 5));
            negCrk = -120.0 * b.row(i * 6 + 5);

            B1 << negSnp, negCrk, negVel, negVel, negAcc, negJer;

            gdT(i) += B1.cwiseProduct(adj_gdC.block<6, 2>(6 * i + 3, 0)).sum();
        }

        negVel = -(b.row(6 * N - 5) +
                2.0 * T1(N - 1) * b.row(6 * N - 4) +
                3.0 * T2(N - 1) * b.row(6 * N - 3) +
                4.0 * T3(N - 1) * b.row(6 * N - 2) +
                5.0 * T4(N - 1) * b.row(6 * N - 1));
        negAcc = -(2.0 * b.row(6 * N - 4) +
                6.0 * T1(N - 1) * b.row(6 * N - 3) +
                12.0 * T2(N - 1) * b.row(6 * N - 2) +
                20.0 * T3(N - 1) * b.row(6 * N - 1));
        negJer = -(6.0 * b.row(6 * N - 3) +
                24.0 * T1(N - 1) * b.row(6 * N - 2) +
                60.0 * T2(N - 1) * b.row(6 * N - 1));

        B2 << negVel, negAcc, negJer;

        gdT(N - 1) += B2.cwiseProduct(adj_gdC.block<3, 2>(6 * N - 3, 0)).sum();

        return;        
    }

    template <typename EIGENMAT>
    inline void propagteCtoP(const Eigen::MatrixXd &adj_gdC, EIGENMAT &gdP)
    {
        for (int i = 0; i < N - 1; i++)
        {
            gdP.col(i) += adj_gdC.row(6 * i + 5).transpose();
        }
        return;
    }
};