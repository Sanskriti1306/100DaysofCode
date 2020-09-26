#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long int t,n;
	cin>>t;
	while(t-->0)
	{
	    cin>>n;
	    map<int,int> m;
	    for(int i=0;i<n;i++)
	    {
	        long int a;
	        cin>>a;
	        if(a!=0)
	        m[a]++;
	    }
	    cout<<m.size()<<endl;
	}
	return 0;
}
