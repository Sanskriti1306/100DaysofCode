#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, a[6];
	cin >> t;
	while(t-->0)
	{
	    int sum=0;
	    for(int i=0;i<6;i++)
	    {
	    cin>>a[i];
	    }
	    for(int i=0;i<5;i++)
	    {
	        int x=a[i]*a[5];
	        sum= sum +x;
	    }
	    if(sum >120)
	    cout << "Yes"<<endl;
	    else 
	    cout<< "No"<<endl;
	}
	return 0;
}
