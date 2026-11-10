#include <stdio.h>

#include "sysfs.h"
#include "colors.h"

int main()
{
    int capacity = read_sysfs_int("/sys/class/power_supply/BAT1/capacity");
    const char *status = read_sysfs_str("/sys/class/power_supply/BAT1/status");

    const char *color;
    if (capacity <= 20) color = RED;
    else if (capacity <= 50) color = YELLOW;
    else color = GREEN;

    printf("<span foreground='%s'>Battery [%s]: %d%%</span>\n", color, status, capacity);
    return 0;
}
