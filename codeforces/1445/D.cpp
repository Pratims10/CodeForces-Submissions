#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod=998244353;
ll fact[300001];
ll power(ll x,ll y)
{
	if(y==0) return 1;
	ll ret=power(x,y/2);
	ret*=ret;
	ret%=mod;
	if(y%2==1)
	ret*=x;
	ret%=mod;
	return ret;
}
ll C(ll n,ll r)
{
	ll ans=fact[r]*fact[n-r];
	ans%=mod;
	ans=power(ans,mod-2);
	ans*=fact[n];
	ans%=mod;
	return ans;
}
int main()
{
	ll i,j,t,m,n;
	cin>>n;
	fact[0]=1;
	for(i=1;i<=300000;i++)
	{
		fact[i]=fact[i-1]*i;
		fact[i]%=mod;
	}
	ll ar[2*n];
	for(i=0;i<2*n;i++)
	cin>>ar[i];
	sort(ar,ar+2*n);
	ll ans=0;
	for(i=0;i<n;i++)
	{
		ans+=ar[2*n-1-i]-ar[i];
	}
	ans%=mod;
	ans*=C(2*n,n);
	ans%=mod;
	cout<<ans;
}