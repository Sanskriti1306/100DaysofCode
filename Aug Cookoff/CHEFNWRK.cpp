//https://www.codechef.com/COOK121B/problems/CHEFNWRK
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n,k;
	    cin>>n>>k;
	    int weight[n],flag=0,c=0;
	    for(int i=0;i<n;i++)
	    cin>>weight[i];

	    for(int i=0;i<n;i++)
	    {
	        if(weight[i]<=k)
	        {
	            c++;
	       int pickedUp = 0;
            while((i < n) && (weight[i]+pickedUp <= k))
            { // try to go as right as you can.
	           pickedUp += weight[i];
	        i ++;
            }
        if(weight[i]+pickedUp >k)
        i--;
	    }
	    else
	    {
	        cout<<"-1"<<endl;
	        flag=1;
	        break;
	    }
	    }
	    if(flag==0)
	    cout<<c<<endl;
	}
	return 0;
}
