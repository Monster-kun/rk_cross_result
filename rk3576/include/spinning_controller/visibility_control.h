/*
 * @Author: Junfeng Guo 
 * @Date: 2023-11-22
 */
#ifndef SPINNING_CONTROLLER__VISIBILITY_CONTROL_H_
#define SPINNING_CONTROLLER__VISIBILITY_CONTROL_H_

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
#ifdef __GNUC__
#define SPINNING_CONTROLLER_EXPORT __attribute__((dllexport))
#define SPINNING_CONTROLLER_IMPORT __attribute__((dllimport))
#else
#define SPINNING_CONTROLLER_EXPORT __declspec(dllexport)
#define SPINNING_CONTROLLER_IMPORT __declspec(dllimport)
#endif
#ifdef SPINNING_CONTROLLER_BUILDING_DLL
#define SPINNING_CONTROLLER_PUBLIC DIFF_DRIVE_CONTROLLER_EXPORT
#else
#define SPINNING_CONTROLLER_PUBLIC DIFF_DRIVE_CONTROLLER_IMPORT
#endif
#define SPINNING_CONTROLLER_PUBLIC_TYPE DIFF_DRIVE_CONTROLLER_PUBLIC
#define SPINNING_CONTROLLER_LOCAL
#else
#define SPINNING_CONTROLLER_EXPORT __attribute__((visibility("default")))
#define SPINNING_CONTROLLER_IMPORT
#if __GNUC__ >= 4
#define SPINNING_CONTROLLER_PUBLIC __attribute__((visibility("default")))
#define SPINNING_CONTROLLER_LOCAL __attribute__((visibility("hidden")))
#else
#define SPINNING_CONTROLLER_PUBLIC
#define SPINNING_CONTROLLER_LOCAL
#endif
#define SPINNING_CONTROLLER_PUBLIC_TYPE
#endif

#endif  // SPINNING_CONTROLLER__VISIBILITY_CONTROL_H_