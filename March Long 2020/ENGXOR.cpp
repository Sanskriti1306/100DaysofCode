//Question Link: https://www.codechef.com/MARCH20B/problems/ENGXOR

#include <iostream>
using namespace std;
int binary(long long int n)
{
        int binaryNum[32];

        // counter for binary array
        int i = 0,c=0;;
        while (n > 0) {
            // storing remainder in binary array
            binaryNum[i] = n % 2;
            n = n / 2;
            i++;
        }
        for (int j = i - 1; j >= 0; j--)
        {
            if(binaryNum[j]==1)
                c++;
        }
        if(c%2==0)
            return 1;
        else
            return 0;
}
int main() {
	// your code goes here
	int t,c,q,n;
	cin>>t;
	while(t-->0)
	{
	    cin>>n;
	    cin>> q;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    for(int i=0;i<q;i++)
            {
                int p;
                cin>>p;
                long long int even=0,odd=0;
                for(int j=0;j<n;j++)
                {
                    int e= binary(arr[j]^p);
                    if(e ==1)
                        even++;
                    else
                        odd++;

                }
                cout<<even<<" "<<odd<<endl;
            }
	}
	return 0;
}
