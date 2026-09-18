#include <stdbool.h>
#include <stdio.h>

#include "./testing.h"
#include <standardloop/logger.h>

extern void Testing(char *name, bool expression)
{
    Log(TRACE, "hello");
}
