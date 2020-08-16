//https://www.codechef.com/problems/MGCSET
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
	long long int t,n,m;
	cin>>t;
	while(t-->0)
	{
	    cin>>n>>m;
	    long long int a,c=0;
	    for(int i=0;i<n;i++)
	    {
	    cin>>a;
	    if(a%m ==0)
	    c++;
	    }
	    cout<< pow(2,c)-1<<endl;
	}
	return 0;
}
