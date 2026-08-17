#include <stdio.h>
int main()
{
int n;
printf("enter any year");
scanf("%d",&n);
if(n%4==0 && n%100)
{
printf("leap year");
}

else{
printf("not a leap year");
}
return 0;
}