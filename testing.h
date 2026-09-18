/**
 * @file testing.h
 * @headerfile testing.h <standardloop/testing.h>
 * @brief A C library for running tests.
 */

#ifndef STANDARDLOOP_TESTING_H
#define STANDARDLOOP_TESTING_H
#include <stdbool.h>

/// @cond INTERNAL
void testing(bool run, const char *name, bool condition, const char *expr,
             const char *file, int line);
/// @endcond

/**
 * @brief A function to Initialize a Testing Run.
 */
extern void TestingInit(void);
/**
 * @brief A function to Complete and Tear Down a Testing Run.
 */
extern void TestingTearDown(void);

/**
 * @brief The main point of this library, a macro for checking a test case
 * instead of using `assert()`.
 */
#define TestCaseVerify(run, name, condition) \
    testing(run, name, (condition), #condition, __FILE__, __LINE__)

/// @cond INTERNAL
extern void TestTesting(void);
/// @endcond

#endif
