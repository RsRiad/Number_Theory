#include<bits/stdc++.h>
using namespace std;
#define N 1000000
#define ll long long
void sievePrime(vector<int> &sieve)
{

    int sum=0;
    sieve[0]=sieve[1]=0;
    sieve[2]=1;
    for(int i=3; i<=N; i+=2)
        sieve[i]=1;

    for(ll i=3; i<=N; i++)
        if(sieve[i])
            for(ll j=i*i; j<=N; j=j+i)
                sieve[j]=0;

}
int primeCount(vector<int> &sieve,vector<int> &csum,int a,int b)
{
    for (int i = 0; i < sieve.size(); i++)
    {
        csum[i]+=sieve[i];
        if(sieve[i])
            csum.push_back(csum[i - 1] + csum[i]);
    }
    return (csum[b]-csum[a-1]);

}

int main()
{
    int a,b;
    cin>>a,b;
    vector<int> sieve(N,0);
    vector<int> csum;
    sievePrime(sieve);
    cout<<primeCount(sieve,csum,a,b)<<endl;

    for(int i=0; i<=100; i++)
        if(sieve[i])
        {
            cout<<i<<"  ";
        }

}
