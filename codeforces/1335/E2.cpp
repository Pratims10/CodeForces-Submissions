#include<bits/stdc++.h>
using namespace std;
#define ll int
ll count(ll f[][201],ll x,ll l,ll r)
{
	if(l==0)
	return f[r][x];
	else return f[r][x]-f[l-1][x];
}
int main()
{
	ll i,j,t,m,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll ar[n];
		for(i=0;i<n;i++)
		cin>>ar[i];
		ll f[n][201];
		for(i=0;i<n;i++)
		{
			for(j=0;j<=200;j++)
			f[i][j]=0;
		}
		f[0][ar[0]]++;
		for(i=1;i<n;i++)
		{
			for(j=0;j<=200;j++)
			f[i][j]=f[i-1][j];
			f[i][ar[i]]++;
		}
		ll ans=1;
		for(i=1;i<=200;i++)
		{
			vector<ll> v;
			for(j=0;j<n;j++)
			if(ar[j]==i)
			v.push_back(j);
			ll l=0,r=v.size()-1;
			while(l<r)
			{
				ll l1=v[l]+1;
				ll l2=v[r]-1;
				for(j=1;j<=200;j++)
				ans=max(ans,2*(l+1)+count(f,j,l1,l2));
				l++,r--;
			}
		}
		cout<<ans<<'\n';
	}
}