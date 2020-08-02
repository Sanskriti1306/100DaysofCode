??question Link:https://www.codechef.com/AUG19B/problems/DSTAPLS
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	long long n, k;
	cin>>t;
	while(t-->0)
	{
	    cin>>n;
	    cin>> k;
	    if((n/k)%k!=0)
	    cout<< "YES"<<endl;
	    else
	    cout<< "NO"<<endl;
	    
	}
	return 0;
}
