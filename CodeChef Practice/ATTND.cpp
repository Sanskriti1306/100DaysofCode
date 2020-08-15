//https://www.codechef.com/problems/ATTND
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>> t;
	while(t-->0)
	{
	    int n;
	    cin>>n;
	    map<string, int> m;
	    string first[n],last[n];
	    for(int i=0;i<n;i++)
	    {
	       cin>>first[i];
	        cin>>last[i];
	         m[first[i]]++;
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(m[first[i]] >1)
                cout<<first[i]<<" "<<last[i]<<endl;
            else
                cout<<first[i]<<endl;
	    }


	}
	return 0;
}
