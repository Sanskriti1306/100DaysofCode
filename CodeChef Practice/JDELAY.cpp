//Question Link:https://www.codechef.com/problems/JDELAY

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n;
	cin >> t;
	while(t-->0)
	{
	    cin>>n;
	    int c=0;
	    for(int i =0;i<n;i++)
	    {
	        int a,b;
	        cin>> a;
	        cin>> b;
	        if(b-a>5)
	        c++;
	    }
	    cout << c<<endl;
	}
	return 0;
}
