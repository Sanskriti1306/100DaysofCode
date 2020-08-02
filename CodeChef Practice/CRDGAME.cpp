#include <iostream>
using namespace std;
int sum(int x)
{
    int s=0;
    while(x!=0)
    {
        s=s+ x%10;
        x=x/10;
    }
    return s;
}
int main() {
	// your code goes here
	int t,n,a,b;
	cin >> t;
	while(t-->0)
	{
	    cin>> n;
	    int sa=0,sb=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a;
	        cin>>b;
	        if(sum(a)>sum(b))
	        sa++;
	        if(sum(a)<sum(b))
	        sb++;
	        if(sum(a)==sum(b))
	        {
	        sa++;
	        sb++;
	        }
	    }
	        if(sa>sb)
	        cout<<"0 "<<sa<<endl;
	        if(sa<sb)
	        cout<<"1 "<<sb<<endl;
	        if(sa==sb)
	        cout<<"2 "<<sa<<endl;
	}
	return 0;
}
