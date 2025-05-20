#include <stdio.h>
int factorial (int n)
{
    if(n==0 || n==1)
    return 1;
    else
    return n * factorial (n-1);
}
int main()
{
    int num;
    printf("Enter a positive integer:");
    scanf("%d", &num);
    if(num<0)
    {
        printf("factorial is not defined for nrgative number:");
    }
    else
    {
        int result=factorial(num);
        printf("factorial of %d =%d\n",num,result);
        
    }
    return 0;
}

