#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t,n,a;
	cin>>t;
	while(t-->0)
	{
	    int flag=0;
	    cin>>n;
	    for(int i=1;i<=n;i++)
	    {
	        cin>>a;
	        if(a!=i)
	        {
	            if(a!=__gcd(a, i))
                    {
                        flag=1;
                    }
	        }
	    }
	    if(flag==1)
	    cout<<"NO"<<endl;
	    else
	    cout<<"YES"<<endl;
	}
	return 0;
}
