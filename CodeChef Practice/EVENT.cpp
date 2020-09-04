#include <iostream>
using namespace std;
int getDay(string a)
{
        if(a=="monday")
        return 1;

        if(a=="tuesday")
        return 2;

        if(a=="wednesday")
        return 3;

        if(a=="thursday")
        return 4;

        if(a=="friday")
        return 5;

        if(a=="saturday")
        return 6;

        if(a=="sunday")
        return 7;
    return 1;
}
int getDiff(int a, int b)
{
    if(a<=b)
    return b-a+1;
    else
    {
        return 8-a+b;
    }
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t-->0)
	{
	    string a,b;
	    cin>>a>>b;
	    int e,s,k=0,ans;
	    cin>>s>>e;
	    int x= getDay(a);
	    int y= getDay(b);
	    int diff= getDiff(x,y);
	    while(diff<=e)
{
  if(diff>=s)
  { k++;
   ans=diff;
  }
  diff=diff+7;
}
if(k==0)
 cout<<"impossible"<<endl;
else if(k>1)
 cout<<"many"<<endl;
else
 cout<<ans<<endl;
	    }
	return 0;
}
