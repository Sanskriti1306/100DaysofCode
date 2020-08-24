//https://www.codechef.com/COOK121B/problems/KFOLD
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,k;
	cin>>t;
	while(t-->0)
	{
	    cin>>n>>k;
	    string s;
	    cin>>s;
	    int numo=0,numz=0;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='0')
	        numz++;
	        else
	        numo++;
	    }
	    //cout<<numz<<" "<<numo<<endl;
	    if(numz!=0 && numo!=0){
	    if(numz%(n/k)==0 && numo%(n/k)==0)
	    {
	        string a="";
	        for(int i=0;i<n/k;i++)
	        {
	            if(i%2==0)
	            {
	                for(int j=0;j<numz/(n/k);j++)
	                a=a+'0';
	                for(int j=0;j<numo/(n/k);j++)
	                a=a+'1';
	            }
	            else
	            {
	                for(int j=0;j<numo/(n/k);j++)
	                a=a+'1';
	                for(int j=0;j<numz/(n/k);j++)
	                a=a+'0';
	            }
	        }
	        cout<<a<<endl;
	    }
	    else
	    cout<<"IMPOSSIBLE"<<endl;
	    }
	    else
	    cout<<s<<endl;


	}
	return 0;
}
