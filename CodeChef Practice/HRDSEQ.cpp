//https://www.codechef.com/problems/HRDSEQ
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t-->0)
	{
	    cin>>n;
	    int a[n];
	    a[0]=0;
	    for(int i=0;i<n;i++)
	    {
	        int j=i-1;
	        while(j>=0 && a[j]!=a[i])
	        j--;
	        if(j<0)
	        a[i+1]=0;
	        else
	        a[i+1]= i-j;
	    }
	    int c=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]==a[n-1])
	        c++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
