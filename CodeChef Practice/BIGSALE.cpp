//Question Link:https://www.codechef.com/problems/BIGSALE
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,i,price,quan,dis;
	    double loss=0,pi,pad,tl=0;
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	        cin>>price>>quan>>dis;
	        pi=(double)(price*(100+dis))/100;
	        pad=(double)(pi*(100-dis))/100;
	        loss=(double)(price-pad)*quan;
	        tl+=loss;
	    }
	    cout<<fixed<<setprecision(6)<<tl<<endl;
	}
	return 0;
}
