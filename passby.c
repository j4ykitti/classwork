#include <stdio.h>
void swap(int*, int*);
int main()
{
   int a, b;
 
   printf("Enter a and b");
   scanf("%d %d",&a,&b);
   swap(&a, &b); 
 
   printf("%d %d",a,b);
 
   return 0;
}
 
void swap(int *i, int *j)
{
   int temp;
 
   temp = *j;
   *j = *i;
   *i = temp;   
}