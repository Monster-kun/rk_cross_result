/*
 * @Author: yaojianming 
 * @Date: 2023-03-31 10:20:56 
 * @Last Modified by:   yaojianming 
 * @Last Modified time: 2023-03-31 10:20:56 
 */
#ifndef Pure_Pursuit_Controller__VISIBILITY_CONTROL_H_
#define Pure_Pursuit_Controller__VISIBILITY_CONTROL_H_

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
#ifdef __GNUC__
#define Pure_Pursuit_Controller_EXPORT __attribute__((dllexport))
#define Pure_Pursuit_Controller_IMPORT __attribute__((dllimport))
#else
#define Pure_Pursuit_Controller_EXPORT __declspec(dllexport)
#define Pure_Pursuit_Controller_IMPORT __declspec(dllimport)
#endif
#ifdef Pure_Pursuit_Controller_BUILDING_DLL
#define Pure_Pursuit_Controller_PUBLIC DIFF_DRIVE_CONTROLLER_EXPORT
#else
#define Pure_Pursuit_Controller_PUBLIC DIFF_DRIVE_CONTROLLER_IMPORT
#endif
#define Pure_Pursuit_Controller_PUBLIC_TYPE DIFF_DRIVE_CONTROLLER_PUBLIC
#define Pure_Pursuit_Controller_LOCAL
#else
#define Pure_Pursuit_Controller_EXPORT __attribute__((visibility("default")))
#define Pure_Pursuit_Controller_IMPORT
#if __GNUC__ >= 4
#define Pure_Pursuit_Controller_PUBLIC __attribute__((visibility("default")))
#define Pure_Pursuit_Controller_LOCAL __attribute__((visibility("hidden")))
#else
#define Pure_Pursuit_Controller_PUBLIC
#define Pure_Pursuit_Controller_LOCAL
#endif
#define Pure_Pursuit_Controller_PUBLIC_TYPE
#endif

#endif  // Pure_Pursuit_Controller__VISIBILITY_CONTROL_H_