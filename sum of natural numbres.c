#include <stdio.h>
int main()
{
int r,d,sum=0;
printf("Enter the number:");
scanf("%d",&d);
for(r=1;r<=d;r++)
{
sum +=r;
}
printf("%d",sum);
return 0;
}
