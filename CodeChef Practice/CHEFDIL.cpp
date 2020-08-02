//Question Link:https://www.codechef.com/AUG19B/problems/CHEFDIL
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t-->0)
	{
	    string s;
	    cin>> s;
  
        int i,c=0; 
        for (i = 0; i < s.length() ; i++) { 
        if(s[i]== '1')
        c++;
        }
        if(c%2==1)
        cout<< "WIN"<<endl;
        else
        cout<< "LOSE"<<endl;
	}
	return 0;
}
