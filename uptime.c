#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
    int time = uptime();
    printf(1, "uptime: %d", time);
    exit();
}