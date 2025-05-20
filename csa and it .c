#include <stdio.h>
void csa()
{
    printf("\n i am in csa fun");
    it();
    printf("\n i am back to csa fun");
}
void it()
{
    printf("\n i am in it fun");
}

int main()
{
    printf("i am in main fun");
    csa();
    printf("\n i am back to main fun");
    

    return 0;
}
