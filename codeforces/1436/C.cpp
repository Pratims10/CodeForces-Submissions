#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll f[1001];
ll mod=1e9+7;
ll power(ll x,ll y)
{
	if(y==0)
	return 1;
	ll p=power(x,y/2);
	p*=p;
	p%=mod;
	if(y%2==1)
	p*=x;
	p%=mod;
	return p;
}
int main()
{
	ll i,j,k,m,n,t,x,pos;
	cin>>n>>x>>pos;
	f[0]=1;
	for(i=1;i<=1000;i++)
	{
		f[i]=f[i-1]*i;
		f[i]%=mod;
	}
	ll l=0,r=n;
	ll ans=1;
	ll big=n-x;
	ll small=x-1;
	while(l<r)
	{
		ll mid=(l+r)/2;
		if(pos>mid)
		{
			ans*=small--;
			l=mid+1;
			ans%=mod;
		}
		else if(pos<mid)
		{
			ans*=big--;
			r=mid;
			ans%=mod;
		}
		else
		{
			l=mid+1;
		}
	}
	ans*=f[big+small];
	ans%=mod;
	cout<<ans;
}