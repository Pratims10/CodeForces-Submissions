#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,d;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll ar[n];
		for(i=0;i<n;i++)
		cin>>ar[i];
		ll ans=LLONG_MAX;
		ll d[n-1];
		ll s=0;
		for(i=0;i<n-1;i++)
		{
			d[i]=abs(ar[i]-ar[i+1]);
			s+=d[i];
		}
		for(i=1;i<n-1;i++)
		{
			ll x=s;
			x-=d[i-1]+d[i];
			x+=abs(ar[i-1]-ar[i+1]);
			ans=min(ans,x);
		}
		ll x=s;
		x-=d[0];
		ans=min(ans,x);
		x=s;
		x-=d[n-2];
		ans=min(ans,x);
		cout<<ans<<endl;
	}
}