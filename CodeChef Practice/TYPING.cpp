//https://www.codechef.com/problems/TYPING
#include <map>
#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t-->0)
	{
	    cin>>n;
	    map<string, float> m;
	    string s;
	    float sum=0,ti=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>s;
	        if(m.find(s) == m.end())
	        {
	            ti=0.2;
	            for(int i=1;i<s.length();i++)
	            {
	                if(s[i]=='d' || s[i]=='f')
	                {
	                    if(s[i-1]=='d' || s[i-1]=='f')
	                    ti=ti+0.4;
	                    else
	                    ti= ti+0.2;
	                }
	                else
	                {
	                   if(s[i-1]=='j' || s[i-1]=='k')
	                   ti=ti+0.4;
	                    else
	                    ti= ti+0.2;
	                }
	            }
	            m[s]=ti;
	            sum=sum+ti;
	            //cout<<m[s]<<endl;
	        }
	        else
	        {
	            sum = sum+ m[s]/2;
	        }
	    }
	    cout<<sum*10<<endl;
	}
	return 0;
}
