#ifndef Dualackermann_Controller__VISIBILITY_CONTROL_H_
#define Dualackermann_Controller__VISIBILITY_CONTROL_H_

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
#ifdef __GNUC__
#define Dualackermann_Controller_EXPORT __attribute__((dllexport))
#define Dualackermann_Controller_IMPORT __attribute__((dllimport))
#else
#define Dualackermann_Controller_EXPORT __declspec(dllexport)
#define Dualackermann_Controller_IMPORT __declspec(dllimport)
#endif
#ifdef Dualackermann_Controller_BUILDING_DLL
#define Dualackermann_Controller_PUBLIC DIFF_DRIVE_CONTROLLER_EXPORT
#else
#define Dualackermann_Controller_PUBLIC DIFF_DRIVE_CONTROLLER_IMPORT
#endif
#define Dualackermann_Controller_PUBLIC_TYPE DIFF_DRIVE_CONTROLLER_PUBLIC
#define Dualackermann_Controller_LOCAL
#else
#define Dualackermann_Controller_EXPORT __attribute__((visibility("default")))
#define Dualackermann_Controller_IMPORT
#if __GNUC__ >= 4
#define Dualackermann_Controller_PUBLIC __attribute__((visibility("default")))
#define Dualackermann_Controller_LOCAL __attribute__((visibility("hidden")))
#else
#define Dualackermann_Controller_PUBLIC
#define Dualackermann_Controller_LOCAL
#endif
#define Dualackermann_Controller_PUBLIC_TYPE
#endif

#endif  // Dualackermann_Controller__VISIBILITY_CONTROL_H_