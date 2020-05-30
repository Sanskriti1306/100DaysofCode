#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t-->0)
	{
	int n;
	cin>> n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	cin>> b[i];
	long int sum=0,x=0,y=0;
	for(int i=0;i<n;i++)
	{
	    if(x==y && a[i]==b[i])
	     sum = sum+a[i];
	    x= x+a[i];
        y=y+b[i];
	}
	cout<<sum<<endl;
	}
	return 0;
}
