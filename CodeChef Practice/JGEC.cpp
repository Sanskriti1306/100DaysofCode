//Question Link:https://www.codechef.com/problems/JGEC
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n, t;
	cin>>t;
	while(t-->0)
	{
	    cin>>n;
	    char str[n];
	    int count=0;
	    cin>>str;
	    for(int i=0;i<n-3;i++)
	    {
	        if(str[i]=='J' && str[i+1]=='G' && str[i+2]=='E' && str[i+3]=='C')
	        {
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
