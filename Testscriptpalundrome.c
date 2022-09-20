#include <stdio.h>
int main()
{
    int n, reversedint = 0, remainder , originalintager;
    printf("Enter an intager : ");
    scanf("%d", &n);
    originalintager = n;
    while (n != 0)
    {
        remainder = n%10;
        reversedint = reversedint*10 + remainder;
        n /= 10;
    }
    if (originalintager == reversedint)
    {
        printf("%d is a palindrome.",originalintager);
    }
    else
    {
        printf("%d is not a palindrome.",originalintager);
    }
    
    return 0;
}