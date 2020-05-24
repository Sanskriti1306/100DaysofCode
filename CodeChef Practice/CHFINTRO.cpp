//Question Link:https://www.codechef.com/problems/CHFINTRO

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,r,a;
	cin>> n;
	cin>>r;
	for(int i=0;i<n;i++)
	{
	    cin>>a;
	    if(a>=r)
	    cout<< "Good boi"<<endl;
	    else
	    cout << "Bad boi"<<endl;
	}
	return 0;
}
