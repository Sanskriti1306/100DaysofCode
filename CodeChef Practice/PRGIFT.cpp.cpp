#include <iostream>
using namespace std;

int main() {

	int t;
    cin>>t;
    while(t--){
 		int n, k;
		 cin >> n >> k;
		 int x[n];
		 int counter = 0;
		 for(int i = 0; i < n; i++) {
		 	cin >> x[i];
		 	if(x[i] % 2 == 0) {
		 		counter++;
			 }
		 }
		 if(k == 0 && counter == n) {
		     cout << "NO" << endl;
		 } else if(counter < k) {
		 	cout << "NO" << endl;
		 } else {
		 	cout << "YES" << endl;
		 }        
	}
	return 0;
}
