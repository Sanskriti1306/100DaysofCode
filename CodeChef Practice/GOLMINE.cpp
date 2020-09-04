#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t-->0)
	{
	     double n; cin>>n;
            double chef=0,chefu=0;
            while(n--)
            {
                double g,a,b; cin>>g>>a>>b;

                int x= a+b;
                chef+=(g*b)/(x);
                chefu+=(g*a)/(x);


            }
            cout<<fixed<<setprecision(7)<<chef<<" "<<chefu<<"\n";
	}
	return 0;
}
