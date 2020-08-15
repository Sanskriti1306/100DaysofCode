//https://www.codechef.com/problems/TABLET
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n, b;
	    cin>>n;
	    cin>>b;
	    int w,h,p,max=0,flag=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>w>>h>>p;
	        if(p<=b)
	        {
	            int x=w*h;
	            if(x>max)
	            max=x;
	            flag=1;
	        }
	    }
	    if(flag==1)
	    cout<<max<<endl;
	    else
	    cout<<"no tablet"<<endl;
	}
	return 0;
}
