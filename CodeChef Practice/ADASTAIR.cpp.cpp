#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n,k,i;
	    cin>>n>>k;
	    long long int a[n],sum=0,value=0;
	    for(i=0;i<n;++i)
	    cin>>a[i];
	    for(i=0;i<n;++i)
	    {
	        if(a[i]-value>k)
	        {
	            if((a[i]-value)%k==0)
	            sum=sum+((a[i]-value)/k-1);
	            else
	            sum=sum+((a[i]-value)/k);
	        }
	        value=a[i];
	    }
	    cout<<sum<<"\n";
	    
	}
	return 0;
}
