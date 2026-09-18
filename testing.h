#ifndef STANDARDLOOP_TESTING_H
#define STANDARDLOOP_TESTING_H
#include <stdbool.h>

/// @cond INTERNAL
void testing(bool run, const char *name, bool condition, const char *expr,
             const char *file, int line);
/// @endcond
///
extern void TestingInit();
extern void TestingTearDown();

#define Verify(run, name, condition) \
    testing(run, name, (condition), #condition, __FILE__, __LINE__)

/// @cond INTERNAL
extern void TestTesting(void);
/// @endcond

#endif
