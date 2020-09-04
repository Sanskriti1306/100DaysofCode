//https://www.codechef.com/problems/CHFMOT18
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,s,n;
	cin>>t;
	while(t-->0)
	{
	    cin>>s>>n;
	    if(n>=s)
	    {
	        if(s%2==0 || s==1)
	    cout<<"1"<<endl;
	    else
	    cout<<"2"<<endl;
	    }
	    else
	    {
	        int sum =0;
	        if(s%2!=0)
	        {
	            sum=1;
	            s--;
	        }
	        int a= s/n;
	        if(n%2==0)
            {
                if(s%n==0)
                    cout<<a+sum<<endl;
                else
                    cout<<a+sum+1<<endl;
            }
	        if(n%2!=0)
            {
                if(s%n==0)
                    cout<<a+sum+1<<endl;
                else
                    cout<<a+sum+2<<endl;
            }
	    }
	}
	return 0;
}
