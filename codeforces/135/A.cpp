#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod=1e9+9;
ll exponentiation(ll base, ll exp)
{
	ll N=mod;
    if (exp == 0)
        return 1;
    if (exp == 1)
        return base % N;
    ll t = exponentiation(base, exp / 2); 
    t = (t * t) % N;
    if (exp % 2 == 0) 
        return t; 
    else
        return ((base % N) * t) % N; 
}
int main()
{
	ll i,j,n,m,k;
	cin>>n;
	ll ar[n];
	for(i=0;i<n;i++)
	cin>>ar[i];
	sort(ar,ar+n);
	if(ar[n-1]==1)
	ar[n-1]=2;
	else ar[n-1]=1;
	sort(ar,ar+n);
	for(i=0;i<n;i++)
	cout<<ar[i]<<' ';
}