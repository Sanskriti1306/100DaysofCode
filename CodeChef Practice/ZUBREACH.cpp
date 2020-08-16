//https://www.codechef.com/problems/ZUBREACH
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,m,n,rx,ry,x,j=1;
	cin>>t;
	while(t-->0)
	{
	    cin>>m>>n>>rx>>ry>>x;
	    string s;
	    cin>>s;
	    int px=0,py=0;
	    for(int i=0;i<x;i++)
	    {
	        if(s[i]=='L')
	        px--;
	        if(s[i]=='R')
	        px++;
	        if(s[i]=='U')
	        py++;
	        if(s[i]=='D')
	        py--;

	    }
	    cout<<"Case "<<j<<": ";
	    j++;
	    if(px >=m || py>= n || px<0 || py<0)
	    cout<<"DANGER"<<endl;
	    else if(px==rx && py==ry)
	    cout<<"REACHED"<<endl;
	    else
	    cout<<"SOMEWHERE"<<endl;
	}
	return 0;
}
