//Question Link: https://www.codechef.com/AUG19B/problems/MSNSADM1
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin >>t;
	while(t-->0)
	{
	    int max=0;
	    cin>>n;
	    int a[n], b[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    for(int i=0;i<n;i++)
	    cin>>b[i];
	    for(int i=0;i<n;i++)
	    {
	        int diff= a[i]*20 - b[i]*10;
	        if(diff> max)
	        max=diff;
	        
	    }
	    cout<< max<<endl;
	}
	return 0;
}
