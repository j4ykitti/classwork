#include<stdio.h>
int isPrime(int);
int n ,result;
main()
{
    scanf("%d",&n);
    if (isPrime(n) == 1) {   printf("%d is prime",n);}  else{  printf("%d is not prime",n);}
    return 0;
}

int isPrime(int n)
{
    int i;
    for ( i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}