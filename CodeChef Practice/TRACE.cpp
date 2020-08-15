//https://www.codechef.com/problems/TRACE
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t-->0)
	{
	    cin>>n;
	    int arr[n][n];
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n;j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    int sum=0,max=0;
	    for(int i=0;i<n;i++)
	    {
	        int k=0,sum=0;
	        for(int j=0;j+i<n;j++)
	        {
	            sum = sum+ arr[k][j+i];
	            k++;
	        }
	        if(sum>max)
	        max=sum;
	    }
	    for(int i=1;i<n;i++)
	    {
	        int k=0,sum=0;
	        for(int j=0;j+i<n;j++)
	        {
	            sum= sum+ arr[i+k][j];
	            k++;
	        }
	        if(sum>max)
	        max=sum;
	    }
	    cout<<max<<endl;
	}
	return 0;
}
