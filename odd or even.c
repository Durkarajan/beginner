#include <stdio.h>
int main()
{
int num;
printf("Enter the number: ");
scanf("%d",&num);
if(num%2==0)
printf("The given number is even",num);
else
printf("The given number is odd",num);
return 0;
}
