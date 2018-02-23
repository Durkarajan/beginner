#include <stdio.h>
int main()
{
int num,reverse_num=0,remainder,temp;
scanf("%d",&num);
temp=num;
while(temp!=0)
{
remainder=temp%10;
reverse_num=reverse_num*10+remainder;
temp/=10;
} 
if(reverse_num==num) 
printf("Yes",num);
else
printf("No",num);
return 0;
}
