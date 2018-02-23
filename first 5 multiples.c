# include <stdio.h> 
# include <conio.h>
void main() 
{ 
int i,n,d; 
clrscr() ;
scanf("%d",&d) ; 
scanf("%d",&n) ; 
printf("\n%d\n\n",d) ; 
for(i=1;i<=n;i++) 
if(i%d==0) 
printf("%d\t",i) ; 
getch() ; 
}
