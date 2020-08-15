//https://www.codechef.com/problems/DEPCHEF
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t-->0)
	{
	    cin>> n;
	    int a[n],b[n],c[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    c[0]=a[1]+a[n-1];
	    c[n-1]=a[n-2]+a[0];
	    for(int i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	    for(int i=1;i<n-1;i++)
	    {
	        c[i]= a[i-1]+a[i+1];
	    }
	    int max=-1;
	    for(int i=0;i<n;i++)
	    {
	        if(c[i]<b[i] && b[i]>max)
            {
                max=b[i];
            }

	    }
	    
	    cout<< max<<endl;
	}
	return 0;
}
