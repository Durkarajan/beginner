#include <stdio.h>
#define MAX_SIZE 100 
int main()
{
char str[MAX_SIZE];
int i,words;
gets(str);
i=0;
words=1;
while(str[i]!='\0')
{
if(str[i]==' '||str[i]=='\n'||str[i]=='\t')
{
words++;
}
i++;
}
printf("%d",words);
return 0;
}
