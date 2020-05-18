//Question Link :https://www.codechef.com/submit/ZCOSCH

#include<iostream>
using namespace std;
int main()
{
    int rank;
    cin>>rank;
    if(1<=rank && rank<=50)
    {
        cout<<"100"<<endl;
    }
    else if(rank<=100)
    {
        cout<<"50"<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
}
