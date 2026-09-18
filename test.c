#include <assert.h>
#include <standardloop/logger.h>
#include <stdio.h>
#include <stdlib.h>

#include "./testing.h"

int main(void)
{
    InitLogger(TRACE, STANDARD_FMT, false, true, true, true);
    TestTesting();
    assert(1);
    return EXIT_SUCCESS;
}
