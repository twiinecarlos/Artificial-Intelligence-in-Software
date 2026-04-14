#ifndef REFACTORED_MACRO_H
#define REFACTORED_MACRO_H

#include <stdio.h>

#define MULTIPLY(a, b) ((a) * (b))

#ifdef DEBUG
#define DEBUG_LOG(msg) \
    do { \
        fprintf(stderr, "[DEBUG] %s:%d: %s\n", __FILE__, __LINE__, msg); \
    } while (0)
#else
#define DEBUG_LOG(msg) \
    do { \
    } while (0)
#endif

#endif /* REFACTORED_MACRO_H */
