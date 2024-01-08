#include <stdio.h>

void log(const char *message)
{
#if defined(DEBUG)
    printf("Debbug: %s\n", message);
#else
    printf("Release: %s\n", message);
#endif
}

int main()
{
    log("Hello World!");
    return 0;
}
