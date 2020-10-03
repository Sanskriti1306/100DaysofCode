#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t-->0)
	{
	    cin>>n;
	    long long int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    long long int m=INT_MAX;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=i+1;j<n;j++)
            {
                long long int a=arr[i]*arr[j]/__gcd(arr[i],arr[j]);
                m= min(m, a);
            }
	    }
	    cout<<m<<endl;
	}
	return 0;
}
