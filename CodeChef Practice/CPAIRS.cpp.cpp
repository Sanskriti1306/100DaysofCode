//Question Link:https://www.codechef.com/problems/CPAIRS
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,a;
	cin>>t;
	while(t-->0)
	{
	    cin>>n;
	    int ne=0,c=0;
	    for(int i=0;i<n;i++)
	    {
	       cin>>a;
	       if(a%2==0)
	       ne++;

	       else
	       c=c+ne;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
