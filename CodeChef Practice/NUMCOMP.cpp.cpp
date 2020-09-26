//Question Link: https://www.codechef.com/problems/NUMCOMP
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,n;
	cin>>t;
	while(t-->0)
	{
	    cin>>a>>b>>n;
	    if(n%2==0)
        {
            if(abs(a)>abs(b))
            cout<<"1"<<endl;
            if(abs(a)<abs(b))
            cout<<"2"<<endl;
            if(abs(a)==abs(b))
            cout<<"0"<<endl;

        }
        else
        {
            if(a>b)
                cout<<"1"<<endl;
            else if(a<b)
                cout<<"2"<<endl;
            else
                cout<<"0"<<endl;
            }
        }
	return 0;
}
