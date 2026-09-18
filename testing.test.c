#include "./testing.h"

extern void TestTesting()
{
    TestingInit();
    TestCaseVerify(true, "will pass", 1 == 1);
    TestCaseVerify(true, "will fail", 1 == 0);
    TestCaseVerify(false, "will not run", 1 == 0);
    TestingTearDown();
}
