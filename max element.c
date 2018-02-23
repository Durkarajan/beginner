#include <stdio.h>
int main()
{
int arr[50],size,i,max;
scanf("%d",&size);
for(i=0;i<size;i++)
scanf("%d",&arr[i]);
max=arr[0];
for(i=1;i<size;i++) 
{
if(max<arr[i])
max=arr[i];
}
printf("\n %d",max);
return 0;
}
