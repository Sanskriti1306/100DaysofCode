//https://www.codechef.com/problems/TRAINSET
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t-->0)
	{
	    cin>>n;
		string s[n];
		long long int a[n];
		for(int j=0;j<n;j++) cin>>s[j]>>a[j];
		map<string,long long int> ma,ma2;
		for(int j=0;j<n;j++)
		{
			if(a[j]==1)  ma[s[j]]++;
			else ma2[s[j]]++;
		}
		int ans=0;
		for(auto w: ma)
		{
			if(ma2[w.first]<w.second)
			{
				ans+=w.second;
			}
		}
		for(auto w: ma2)
		{
			if(ma[w.first]<=w.second)
			{
				ans+=w.second;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
