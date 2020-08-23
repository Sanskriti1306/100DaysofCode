//https://www.codechef.com/problems/CENS20D
#include <iostream>
using namespace std;

int main() {
    int t,n;
    cin>>t;
    while(t-->0)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int c=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if((arr[i] & arr[j]) ==arr[i])
                c++;
            }
        }
        cout<<c<<endl;
    }
	// your code goes here
	return 0;
}
