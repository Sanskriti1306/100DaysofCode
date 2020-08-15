//https://www.codechef.com/problems/QUALPREL
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,k;
	cin>>t;
	while(t-->0)
	{
	    cin>>n;
	    cin>>k;
	    int a[n],c=0;
	    for(int i=0;i<n;i++)
	    cin>> a[i];
	    sort(a, a+n, greater<int>());
	    
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]>=a[k-1])
	        c++;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
