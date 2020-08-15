//Question Link:https://www.codechef.com/AUG20B/problems/CRDGAME3
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, a,b;
	cin>> t;
	while(t-->0)
	{
	    cin>> a;
	    cin>>b;
	    int chef, rick;
	    if(a%9==0)
            chef=a/9;
        else
            chef = a/9+1;
        if(b%9==0)
            rick= b/9;
	    else
            rick= b/9+1;
        //cout<< "chef "<<chef<<endl;
        //cout<<"rick "<<rick<<endl;

        if(chef==rick)
	    cout<< "1 "<< rick<<endl;
	    else
	    {
	        if(chef<rick)
	        cout<<"0 "<<chef<<endl;
	        else
	        cout<<"1 "<<rick<<endl;
	    }
	}
	return 0;
}
