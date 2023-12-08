#include "kernel/types.h"
#include "kernel/stat.h"
#include "user.h"

//sample user program for getreadcount
int main()
{
    printf("ReadCount is %d\n", getreadcount());
    exit(0);
}