#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		ll K;
		cin>>n>>K;
		vector<pair<ll,ll>> v;
		for(i=0;i<n;i++)
		{
			cin>>j>>k;
			v.push_back({j,k});
		}
		ll ans=-1;
		for(i=0;i<n;i++)
		{
			ll ctr=0;
			for(j=0;j<n;j++)
			{
				ll dist=abs(v[i].first-v[j].first)+abs(v[i].second-v[j].second);
				if(dist<=K)
				{
					ctr++;
				}
			}
			if(ctr==n)
			ans=1;
		}
		cout<<ans<<endl;
	}
}