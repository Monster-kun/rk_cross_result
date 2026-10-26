/**
 * @file visibility_control.h
 * @author Junfeng Guo
 * @brief Simple controller
 * @version 0.1
 * @date 2024-08-30
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#ifndef SIMPLE_CONTROLLER__VISIBILITY_CONTROL_H_
#define SIMPLE_CONTROLLER__VISIBILITY_CONTROL_H_

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
#ifdef __GNUC__
#define SIMPLE_CONTROLLER_EXPORT __attribute__((dllexport))
#define SIMPLE_CONTROLLER_IMPORT __attribute__((dllimport))
#else
#define SIMPLE_CONTROLLER_EXPORT __declspec(dllexport)
#define SIMPLE_CONTROLLER_IMPORT __declspec(dllimport)
#endif
#ifdef SIMPLE_CONTROLLER_BUILDING_DLL
#define SIMPLE_CONTROLLER_PUBLIC DIFF_DRIVE_CONTROLLER_EXPORT
#else
#define SIMPLE_CONTROLLER_PUBLIC DIFF_DRIVE_CONTROLLER_IMPORT
#endif
#define SIMPLE_CONTROLLER_PUBLIC_TYPE DIFF_DRIVE_CONTROLLER_PUBLIC
#define SIMPLE_CONTROLLER_LOCAL
#else
#define SIMPLE_CONTROLLER_EXPORT __attribute__((visibility("default")))
#define SIMPLE_CONTROLLER_IMPORT
#if __GNUC__ >= 4
#define SIMPLE_CONTROLLER_PUBLIC __attribute__((visibility("default")))
#define SIMPLE_CONTROLLER_LOCAL __attribute__((visibility("hidden")))
#else
#define SIMPLE_CONTROLLER_PUBLIC
#define SIMPLE_CONTROLLER_LOCAL
#endif
#define SIMPLE_CONTROLLER_PUBLIC_TYPE
#endif

#endif  // SIMPLE_CONTROLLER__VISIBILITY_CONTROL_H_