??Question Link:https://www.codechef.com/AUG20B/problems/CHEFWARS
#include <iostream>
#include <cmath> 
using namespace std;

int main() {
	// your code goes here
	int t,p,h;
	cin >> t;
	while(t-->0)
	{
	    cin>>h;
	    cin>>p;
	    while(p>0 && h >0)
	    {
	        h=h-p;
	        p=floor(p/2);
	    }
	    if(h<=0)
	    cout<< "1"<<endl;
	    else
	    cout <<"0"<<endl;
	}
	return 0;
}
