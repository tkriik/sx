#ifndef NOTREACHED_H
#define NOTREACHED_H

#ifdef NDEBUG

#include <stdlib.h>

#define NOTREACHED() abort()

#else /* NDEBUG */

#include <assert.h>

#define NOTREACHED() assert(0 && "NOTREACHED")

#endif /* NDEBUG */

#endif /* NOTREACHED_H */
