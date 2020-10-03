#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,n;
	cin>>t;
	while(t-->0)
	{
	    cin>>a>>b>>n;
	    if(n%2==1)
	    {
	    a=a*2;
	    }
	    if(a>=b)
	    cout<<a/b<<endl;
	    else
	    cout<<b/a<<endl;
	    
	}
	return 0;
}
