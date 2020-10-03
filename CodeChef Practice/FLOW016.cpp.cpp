#include <iostream>
using namespace std;
long int gcd(long int a, long int b){ 
    if (a == 0) 
        return b;  
    return gcd(b % a, a);  
 } 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t-->0)
	{
	    long int a, b;
	    cin>>a>>b;
	    cout<<gcd(a,b)<<" "<<(a*b)/gcd(a,b)<<endl;
	}
	return 0;
}
