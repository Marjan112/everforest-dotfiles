#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "colors.h"

int main()
{
    double loadavg;
    if (getloadavg(&loadavg, 1) < 0) {
        perror("getloadavg");
        return 1;
    }

    int cores = sysconf(_SC_NPROCESSORS_ONLN);
    if (cores < 0) {
        perror("sysconf");
        return 1;
    }

    printf("<span foreground='%s'>Load: %.2f</span>\n", loadavg >= cores ? RED : FOREGROUND, loadavg);
    return 0;
}
