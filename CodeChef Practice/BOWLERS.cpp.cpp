#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,k,l;
	cin>>t;
	while(t-->0)
	{
	    cin>>n>>k>>l;
	    if(k*l<n)
	    cout<<"-1"<<endl;
	    else
	    {
	        if(k==1 && n>1)
	        cout<<"-1"<<endl;
	        else
	        {
	            for(int i=0;i<n;i++)
	            cout<<(i+k)%k +1<<" ";
	            cout<<endl;
	        }
	    }
	}
	return 0;
}
