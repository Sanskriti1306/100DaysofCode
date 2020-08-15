//Question Link:https://www.codechef.com/AUG20B/problems/LINCHESS
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,k,a;
	cin>>t;
	while(t-->0)
	{
	    cin>> n;
	    cin>>k;
	    int pos=0, min=INT_MAX,a[n],flag=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	    if(k%a[i]==0)
	        {
	            int c= k/a[i]-1;
	            if(c<min)
	            {
	            min=c;
	            pos=a[i];
	            flag=1;
	            }
	        }
	    }
	    if(flag==1)
	    cout<<pos<<endl;
	    else
	    cout<<"-1"<<endl;

	}
	return 0;
}
