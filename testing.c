#include <stdbool.h>
#include <stdio.h>

#include "./testing.h"
#include <standardloop/logger.h>

// typedef struct
// {

// } TestOptions;

// static TestOptions options = {};

struct TestingResults
{
    u_int64_t passed;
    u_int64_t failed;
    u_int64_t skipped;
};

static struct TestingResults results = {.skipped = 0, .failed = 0, .passed = 0};

struct LoggerOptions standard_options = {.log_level = TRACE,
                                         .log_type = STANDARD_FMT,
                                         .timestamp = false,
                                         .flush = true,
                                         .newline = true,
                                         .color = true,
                                         .display_level = false};

struct LoggerOptions timestamp_options = {.log_level = TRACE,
                                          .log_type = STANDARD_FMT,
                                          .timestamp = true,
                                          .flush = true,
                                          .newline = true,
                                          .color = true,
                                          .display_level = false};

extern void TestingInit()
{
    InitLogger(timestamp_options);
    Log(TRACE, "Starting test run.....");
    InitLogger(standard_options);
}

void testing(bool run, const char *name, bool condition, const char *expr,
             const char *file, int line)
{
    InitLogger(standard_options);
    if (run)
    {
        if (!condition)
        {
            results.failed++;

            Log(ERROR, "Test: \"%s\" Failed! (%s) in %s at line %d", name, expr,
                file, line);
        }
        else
        {
            results.passed++;
            // Log(DEBUG, "\"%s\" Passed! (%s) in %s at line %d", name, expr,
            // file,
            //     line);
        }
    }
    else
    {
        results.skipped++;
        Log(WARN, "Test: \"%s\" Skipped! (%s) in %s at line %d", name, expr,
            file, line);
    }
}

static void testingSummary()
{
    InitLogger(standard_options);
    Log(TRACE, "--------results--------");
    Log(DEBUG, "passed:   %d", results.passed);
    Log(ERROR, "failed:   %d", results.failed);
    Log(WARN, "skipped:  %d", results.skipped);
    Log(TRACE, "-----------------------");
}

extern void TestingTearDown()
{
    testingSummary();
    InitLogger(timestamp_options);
    Log(TRACE, "Done!");
}
