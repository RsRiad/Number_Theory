#include<bits/stdc++.h>
using namespace std;
#define N 1000000
#define ll long long
void seivePrime(vector<int> &seive)
{
    seive[0]=seive[1]=0;
    seive[2]=1;
    for(int i=3; i<=N; i+=2)
        seive[i] = 1;

    for(ll i=3; i<=N; i++)
        if(seive[i])
            for(ll j=i*i; j<=N; j+=i)
                seive[j]=0;
}


int main()
{
    vector<int> seive(N,0);
    seivePrime(seive);

    for(int i=0; i<=100000; i++)
		if(seive[i])
            cout<<i<<"   ";


    return 0;
}
