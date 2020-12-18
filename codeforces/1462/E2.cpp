#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod=1e9+7;
ll f[200001];
ll power(ll x,ll y)
{
	if(y==0)
	return 1;
	ll ret=power(x,y/2);
	ret*=ret;
	ret%=mod;
	if(y%2==1)
	{
		ret*=x;
		ret%=mod;
	}
	return ret;
}
ll C(ll n,ll r)
{
	if(n==r)
	return 1;
	if(n<r)
	return 0;
	ll ret=f[n];
	ll y=f[r]*f[n-r];
	y%=mod;
	y=power(y,mod-2);
	ret*=y;
	ret%=mod;
	return ret;
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	f[0]=1;
	for(i=1;i<=200000;i++)
	{
		f[i]=f[i-1]*i;
		f[i]%=mod;
	}
	while(t--)
	{
		cin>>n>>m>>k;
		ll ar[n];
		vector<ll>b(n);
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
			b[i]=ar[i];
		}
		sort(b.begin(),b.end());
		ll ans=0;
		for(i=0;i<n;i++)
		{
			ll x=b[i]-k;
			ll pos=lower_bound(b.begin(),b.end(),x)-b.begin();
			x=(i-pos);
			
			{
				//if(x>0)
				{
					//cout<<x<<' ';
					ans+=C(x,m-1);
					ans%=mod;
				}
			}
		}
		cout<<ans<<'\n';
	}
}