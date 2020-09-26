#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t-->0)
    {
        cin>>n;
        int sum=0,a;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            sum=sum+a;
            
        }
        if(sum<0)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
        
    }
	return 0;
}
