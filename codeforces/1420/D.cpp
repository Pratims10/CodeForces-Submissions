#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod=998244353;
ll power(ll x,ll y)
{
	if(y==0)
	return 1;
	ll ret=power(x,y/2);
	ret*=ret;
	ret%=mod;
	if(y%2==1)
	ret*=x;
	ret%=mod;
	return ret;
}
ll C(ll fact[],ll n,ll r)
{
	if(n<0 or r<0 or n<r)
	return 0;
	ll ans=fact[n];
	ll x=fact[r]*fact[n-r];
	x%=mod;
	x=power(x,mod-2)%mod;
	ans*=x;
	ans%=mod;
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll i,j,k,m,n,t,q;
	cin>>n>>k;
	ll fact[2*n+1];
	fact[0]=1;
	fact[1]=1;
	for(i=2;i<=2*n;i++)
	{
		fact[i]=((fact[i-1]%mod)*(i%mod))%mod;
	}
	map<ll,ll> mp;
	vector<pair<ll,ll>> v;
	for(i=0;i<n;i++)
	{
		ll k1;
		cin>>j>>k1;
		v.push_back({j,k1});
		mp[j]++;
		mp[k1]++;
	}
	map<ll,ll> cmpval;
	j=1;
	for(auto x:mp)
	{
		cmpval[x.first]=j++;
	}
	ll f[2*n+1];
	memset(f,0,sizeof(f));
	ll on[2*n+1];
	memset(on,0,sizeof(on));
	ll cont[2*n+1];
	memset(cont,0,sizeof(cont));
	ll d[2*n+5];
	memset(d,0,sizeof(d));
	for(i=0;i<n;i++)
	{
		v[i].first=cmpval[v[i].first];
		v[i].second=cmpval[v[i].second];
		on[v[i].first]++;
		d[v[i].first]++;
		d[v[i].second+1]--;
	}
	for(i=1;i<=2*n+4;i++)
	d[i]+=d[i-1];
	ll ans=0;
	for(i=1;i<=2*n;i++)
	{
		cont[i]=d[i]-on[i];
		for(j=1;j<=min(k,on[i]);j++)
		{
			ll x=C(fact,on[i],j);
			ll y=cont[i]-j;
			y=C(fact,cont[i],k-j);
			x%=mod;
			y%=mod;
			x*=y;
			x%=mod;
			ans+=x;
			ans%=mod;
		}
	}
	cout<<ans;
}