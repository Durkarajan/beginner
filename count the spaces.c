#include<iostream.h>
using namespace std;
int main()
{
string s;
int len,i,count=0;
cout<<"ENTER STRING: ";
getline(cin,s);
len=s.size();
for(i=0;i<len;i++)
{
if(s[i]==' ')
{
count++;
}
}
cout<<"NUMBER OF SPACES IN THE GIVEN STRING ARE "<<count;
return 0;
}
