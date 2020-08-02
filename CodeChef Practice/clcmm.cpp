//Question Link:https://www.codechef.com/problems/RD19
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,t,a,flag=0;
	cin>>t;
	while(t-->0)
	{
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	     cin>>a[i];
	    }int ans = 1;
    for(int i = 0; i < n; i++) {
      ans *= a[i];
    }
    if(ans % 2 != 0) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
	}
	return 0;
}
