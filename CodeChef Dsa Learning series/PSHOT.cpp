//https://www.codechef.com/LRNDSA02/problems/PSHOT
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n;
	cin>>t;
	while(t-->0)
	{
	    cin>>n;
	    string s;
	    cin>>s;
	    int a=0,b=0,sa=n,sb=n ,flag=0;
	    for(int i=0;i<2*n;i++)
	    {
	        if(i%2==0 )
	        {
	          if(s[i]=='1')
	        a++;
	        sa--;
	        }

	        if(i%2!=0)
            {
                if(s[i]=='1')
                    b++;
                sb--;
            }
	        if(a>sb+b || b>sa+a||(sa==sb &&i==2*n-1))
            {
	        cout<<i+1<<endl;
	        break;
	        }
	    }
	}
	return 0;
}
