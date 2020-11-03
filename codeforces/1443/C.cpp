#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool check(ll ar[],ll b[],ll x,ll n)
{
	ll ans=0;
	for(ll i=0;i<n;i++)
	{
		if(ar[i]>x)
		ans+=b[i];
	}
	return ans<=x;
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll ar[n],b[n];
		for(i=0;i<n;i++)
		cin>>ar[i];
		for(i=0;i<n;i++)
		cin>>b[i];
		ll l=1,r=1e18;
		ll ans=LLONG_MAX;
		while(l<=r)
		{
			ll mid=(l+r)/2;
			if(check(ar,b,mid,n))
			{
				r=mid-1;
				ans=min(ans,mid);
			}
			else
			l=mid+1;
		}
		cout<<ans<<endl;
	}
}