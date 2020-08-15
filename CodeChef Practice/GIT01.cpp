//https://www.codechef.com/problems/GIT01
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,m,i,j;
	cin>>t;
while(t--)
{
int cost1=0,cost2=0;
cin>>n;
cin>>m;
char str[n][m];
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
    cin>>str[i][j];
}
}
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if((i+j)%2==0)
{

if(str[i][j]=='G')
{
cost1+= 3;
}
else
{
cost2+= 5;
}
}
else
{
if(str[i][j] =='R')
{
cost1+=5;
}
else
{
cost2+=3;
}
}}}
if(cost1<cost2)
{
    cout<<cost1<<endl;
}
else
{
    cout<<cost2<<endl;
}
}
	return 0;
}
