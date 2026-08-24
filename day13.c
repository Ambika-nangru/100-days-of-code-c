#include <stdio.h>
int main()
{
int a,b;
printf("enter first number(a)");
scanf("%d",&a);
printf("enter second number(b)");
scanf("%d",&b);
printf("\n before swapping: a=%d, b=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\n after swapping: a=%d, b=%d",a,b);
return 0;
}
