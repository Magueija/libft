#include <stddef.h>
#include <string.h>

void    *memrchr(const void *s, int c, size_t n)
{
    if (n > 0) {
        const char*  p = (const char*) s;
        const char*  q = p + n;
        while (1) {
            q--; if (q < p || q[0] == c) break;
            q--; if (q < p || q[0] == c) break;
            q--; if (q < p || q[0] == c) break;
            q--; if (q < p || q[0] == c) break;
        }
        if (q >= p)
            return (void*)q;
    }
    return NULL;
}