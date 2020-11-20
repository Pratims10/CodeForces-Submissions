#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll func(ll ar[],ll n,ll x)
{
	ll b[n];
	for(ll i=0;i<n;i++)
	{
		b[i]=ar[i]+(i+1)*x;
	}
	sort(b,b+n);
	ll ret=0;
	for(ll i=0;i<x;i++)
	ret+=b[i];
	return ret;
}
int main()
{
	ll i,j,k,m,n,s;
	cin>>n>>s;
	ll ar[n];
	for(i=0;i<n;i++)
	cin>>ar[i];
	ll l=0,r=n;
	ll ans=0,val=0;
	while(l<=r)
	{
		ll mid=(l+r)/2;
		ll x=func(ar,n,mid);
		if(x<=s)
		{
			ans=max(ans,mid);
			val=x;
			l=mid+1;
		}
		else r=mid-1;
	}
	cout<<ans<<' '<<val;
}