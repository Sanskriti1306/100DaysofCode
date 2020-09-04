#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t-->0)
	{
	    cin>>n;
    	    int o=0,a;
    	    for(int i=0;i<n;i++)
    	    {
    	        cin>>a;
    	        if(a%2!=0)
    	        o++;
    	    }
    	    if(n==1)
	    cout<<"1"<<endl;
	    else{
    	    if(o%2==0 )
    	    cout<<"1"<<endl;
    	    if(o%2!=0)
    	    cout<<"2"<<endl;
	    }
	}
	return 0;
}
