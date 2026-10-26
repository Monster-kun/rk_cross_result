/*
 * @Author: Junfeng Guo 
 * @Date: 2024-05-10
 */
#ifndef HALT_CONTROLLER__VISIBILITY_CONTROL_H_
#define HALT_CONTROLLER__VISIBILITY_CONTROL_H_

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
#ifdef __GNUC__
#define HALT_CONTROLLER_EXPORT __attribute__((dllexport))
#define HALT_CONTROLLER_IMPORT __attribute__((dllimport))
#else
#define HALT_CONTROLLER_EXPORT __declspec(dllexport)
#define HALT_CONTROLLER_IMPORT __declspec(dllimport)
#endif
#ifdef HALT_CONTROLLER_BUILDING_DLL
#define HALT_CONTROLLER_PUBLIC DIFF_DRIVE_CONTROLLER_EXPORT
#else
#define HALT_CONTROLLER_PUBLIC DIFF_DRIVE_CONTROLLER_IMPORT
#endif
#define HALT_CONTROLLER_PUBLIC_TYPE DIFF_DRIVE_CONTROLLER_PUBLIC
#define HALT_CONTROLLER_LOCAL
#else
#define HALT_CONTROLLER_EXPORT __attribute__((visibility("default")))
#define HALT_CONTROLLER_IMPORT
#if __GNUC__ >= 4
#define HALT_CONTROLLER_PUBLIC __attribute__((visibility("default")))
#define HALT_CONTROLLER_LOCAL __attribute__((visibility("hidden")))
#else
#define HALT_CONTROLLER_PUBLIC
#define HALT_CONTROLLER_LOCAL
#endif
#define HALT_CONTROLLER_PUBLIC_TYPE
#endif

#endif  // HALT_CONTROLLER__VISIBILITY_CONTROL_H_