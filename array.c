#include<stdio.h>
int main()
{
{
int n,sum=0,c,array[100];
printf("Enter the number of integers you want to add:");
scanf("%d",&n);
printf("\n\nEnter %d integers \n\n", n);
for(c=0;c<n;c++)
{
scanf("%d",&array[c]);
sum += array[c]; 
}
printf("\n\nSum=%d\n\n",sum);
printf("\n\n\t\t\tCoding is Fun !\n\n\n");
}
return 0;
}
