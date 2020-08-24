//https://www.codechef.com/COOK121B/problems/POLYREL
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t-->0)
    {
        cin>>n;
        int x,y;
        for(int i=0;i<n;i++)
        cin>>x>>y;
            int a=n;
            while(n>=6)
            {
                n=n/2;
                a=a+n;
            }
            cout<<a<<endl;
        }
	return 0;
}
