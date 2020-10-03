#include <iostream>
#include<bits/stdc++.h>
using namespace std;
long long int lcm(long long int a,long long int b){
    return (a*b)/__gcd(a,b);
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t-->0)
    {
       long long unsigned int n,k;
		long int a,b;
		cin>>n>>a>>b>>k;
		
		long long int ans=0;
		ans=(n/a)+(n/b)-2*(n/lcm(a,b));
		if(ans>=k)
		cout<<"Win"<<endl;
		else
		cout<<"Lose"<<endl;
    }
	return 0;
}
