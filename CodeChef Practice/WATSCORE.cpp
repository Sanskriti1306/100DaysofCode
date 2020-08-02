//Question Link: https://www.codechef.com/DEC19B/problems/WATSCORE
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	while(t-->0)
	{
	    int n,p,s,sum=0;
	    cin>> n;
	    int arr[8];
	    for(int i=0;i<8;i++)
	    arr[i]=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>p;
	        cin>>s;
	        if(p<9)
	        if(s>arr[p-1])
	        arr[p-1]=s;
	    }
	    for(int i=0;i<8;i++)
	    sum = sum+ arr[i];
	    cout<< sum<<endl;
	}
	return 0;
}
