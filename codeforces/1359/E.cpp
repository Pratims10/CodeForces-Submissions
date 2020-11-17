#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod=998244353;
ll fact[500001];
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
	ll i,j,k,m,n,t;
	cin>>n>>k;
	fact[0]=1;
	for(i=1;i<=500000;i++)
	{
		fact[i]=fact[i-1]*i;
		fact[i]%=mod;
	}
	if(k>n)
	{
		cout<<0;
		return 0;
	}
	/*if(k==1)
	{
		cout<<n;
		return 0;
	}*/
	ll ans=C(n-1,k-1);
	ans%=mod;
	for(i=2;i<=n;i++)
	{
		ll e=n/i;
		if(k>e)
		{
			cout<<ans;
			return 0;
		}
		ans+=C(e-1,k-1);
		ans%=mod;
	}
	cout<<ans;
}