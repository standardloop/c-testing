#include "./testing.h"

extern void TestTesting()
{
    TestingInit();
    Verify(true, "will pass", 1 == 1);
    Verify(true, "will fail", 1 == 0);
    Verify(false, "will not run", 1 == 0);
    TestingTearDown();
}
