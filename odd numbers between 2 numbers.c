#include<stdio.h> 
int main()
{
int rem,i;
for(i=1; i<=100; ++i)
{
rem = i % 2;
if(rem != 0)
printf("\n  %d",i);
}
return 0; 
} 
