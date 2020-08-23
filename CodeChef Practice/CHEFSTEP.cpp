//https://www.codechef.com/LTIME86B/problems/CHEFSTEP
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,k,a;
	cin>>t;
	while(t-->0)
	{
	    cin>>n>>k;
	    string s;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a;
	        if(a%k==0)
	        s= s+'1';
	        else
	        s= s+'0';
	    }
	    cout<<s<<endl;
	}
	return 0;
}
