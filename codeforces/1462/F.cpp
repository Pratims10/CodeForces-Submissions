#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector<pair<ll,ll>> v;
		ll ar[n],b[n];
		map<ll,ll> mp;
		for(i=0;i<n;i++)
		{
			cin>>ar[i]>>b[i];
			v.push_back({ar[i],b[i]});
			mp[b[i]]++;
		}
		sort(ar,ar+n);
		sort(b,b+n);
		ll ans=n-1;
		for(i=0;i<n;i++)
		{
			ll x = v[i].first;
			ll y = v[i].second;
			ll ctr = n - (lower_bound(ar, ar+n, y+1) - ar);
			ctr += upper_bound(b,b+n,x)-b;
			ctr-=mp[x];
			ans=min(ans,ctr);
		}
		cout<<ans<<"\n";
	}
}