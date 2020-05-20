//Question Link: https://www.codechef.com/problems/PLAYSTR

#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s1;
        string s2;
        cin>>s1;
        cin>>s2;
        int cnt=0, cpt=0;
        for(int i=0;i<s1.length();i++){
			if(s1[i]=='1')cnt++;
			if(s2[i]=='1')cpt++;
		}
		if(cnt==cpt)cout<<"YES\n";
		else cout<<"NO\n";
    }
	return 0;
}
