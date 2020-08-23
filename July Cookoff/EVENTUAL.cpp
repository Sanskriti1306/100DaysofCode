//https://www.codechef.com/COOK120B/problems/EVENTUAL
#include <iostream>
#include<map>
#include<string.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t-->0)
	{
	    cin>>n;
	    map<int,int> m;
	    string s;
	    cin>>s;
	    for(int i=0;i<n;i++)
	    {
	        m[s[i]]++;
	    }
	    int flag=0;
	    map<int, int>::iterator it;
	    for (it = m.begin(); it != m.end(); ++it)
	    {
	        if(it->second %2!=0)
	        {
	            flag=1;
	        }
	    }
	    if(flag==1)
	    cout<<"NO"<<endl;
	    else
	    cout<<"YES"<<endl;
	}

	return 0;
}
