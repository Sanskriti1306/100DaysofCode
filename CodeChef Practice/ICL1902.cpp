//Question Link: https://www.codechef.com/problems/ICL1902

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
	int t, n;
	cin >> t;
	while(t-->0)
	{
	    cin>>n;
	    int c=0,i;
	    while(n>0)
	    {
	        i=sqrt(n);
	        n-=i*i;
	        c++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
