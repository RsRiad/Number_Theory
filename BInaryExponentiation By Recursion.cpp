#include<bits/stdc++.h>
using namespace std;
const int M = 1e9+7;
int binExpRecur(int a, int b)
{

    if(b==0) return 1;

    int res=binExpRecur(a,b/2);// we can take long long
    if(b&1)//this means odd
    {
        return ((a*(res*1LL*res)%M)%M);
    }
    else
    {
        return (res*1LL*res)%M;
    }

}

int main()
{
    int a=20,b=20;
    cout<<binExpRecur(a,b)<<endl;
    cout<<pow(20,20);
    return 0;
}
