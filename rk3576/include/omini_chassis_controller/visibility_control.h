/*
 * @Author: yaojianming 
 * @Date: 2023-03-31 10:20:56 
 * @Last Modified by:   yaojianming 
 * @Last Modified time: 2023-03-31 10:20:56 
 */
#ifndef OMINI_CHASSIS_CONTROLLER__VISIBILITY_CONTROL_H_
#define OMINI_CHASSIS_CONTROLLER__VISIBILITY_CONTROL_H_

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
#ifdef __GNUC__
#define OMINI_CHASSIS_CONTROLLER_EXPORT __attribute__((dllexport))
#define OMINI_CHASSIS_CONTROLLER_IMPORT __attribute__((dllimport))
#else
#define OMINI_CHASSIS_CONTROLLER_EXPORT __declspec(dllexport)
#define OMINI_CHASSIS_CONTROLLER_IMPORT __declspec(dllimport)
#endif
#ifdef OMINI_CHASSIS_CONTROLLER_BUILDING_DLL
#define OMINI_CHASSIS_CONTROLLER_PUBLIC DIFF_DRIVE_CONTROLLER_EXPORT
#else
#define OMINI_CHASSIS_CONTROLLER_PUBLIC DIFF_DRIVE_CONTROLLER_IMPORT
#endif
#define OMINI_CHASSIS_CONTROLLER_PUBLIC_TYPE DIFF_DRIVE_CONTROLLER_PUBLIC
#define OMINI_CHASSIS_CONTROLLER_LOCAL
#else
#define OMINI_CHASSIS_CONTROLLER_EXPORT __attribute__((visibility("default")))
#define OMINI_CHASSIS_CONTROLLER_IMPORT
#if __GNUC__ >= 4
#define OMINI_CHASSIS_CONTROLLER_PUBLIC __attribute__((visibility("default")))
#define OMINI_CHASSIS_CONTROLLER_LOCAL __attribute__((visibility("hidden")))
#else
#define OMINI_CHASSIS_CONTROLLER_PUBLIC
#define OMINI_CHASSIS_CONTROLLER_LOCAL
#endif
#define OMINI_CHASSIS_CONTROLLER_PUBLIC_TYPE
#endif

#endif  // OMINI_CHASSIS_CONTROLLER__VISIBILITY_CONTROL_H_