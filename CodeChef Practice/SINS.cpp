#include <iostream>

#include <algorithm> 
using namespace std;

int main() {
	// your code goes here
	int t,m,n;
	cin>>t;
	while(t-->0)
	{
	    cin>>m>>n;
	    cout << __gcd(n, m)*2 << "\n";
	}
	return 0;
}
