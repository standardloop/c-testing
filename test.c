#include <assert.h>
#include <standardloop/logger.h>
#include <stdio.h>
#include <stdlib.h>

#include "./testing.h"

int main(void)
{
    struct LoggerOptions options = {.log_level = TRACE,
                                    .log_type = STANDARD_FMT,
                                    .timestamp = true,
                                    .flush = true,
                                    .newline = true,
                                    .color = true,
                                    .display_level = false};
    InitLogger(options);
    TestTesting();
    assert(1);
    return EXIT_SUCCESS;
}
