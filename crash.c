#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
    int *crasher = 0x0;
    printf(1, "Attempting a program crash!\n");
    int crashed = *crasher;
    printf(1, "int crashed: %d\n", crashed);
    exit();
}
