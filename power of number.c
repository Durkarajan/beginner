#include<stdio.h>
int main()
{
{
int i=1,x,n,ans=1;
printf("Enter x and power n \n");
scanf("%d \n %d", &x, &n);
while(i<=n)
{
ans=ans*x;
i=i+1;
}
printf("%d",ans);
}
return 0;
}
