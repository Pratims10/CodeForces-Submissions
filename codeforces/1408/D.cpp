#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n>>m;
	vector<pair<ll,ll>> ar,b;
	for(i=0;i<n;i++)
	{
		cin>>j>>k;
		ar.push_back({j,k});
	}
	for(i=0;i<m;i++)
	{
		cin>>j>>k;
		b.push_back({j,k});
	}
	ll x=0,y=0;
	ll dist[1000001]={0};
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(ar[i].first<=b[j].first and ar[i].second<=b[j].second)
			{
				ll a1=b[j].first-ar[i].first;
				ll b1=b[j].second-ar[i].second+1;
				//cout<<a1<<" "<<b1<<endl;
				dist[a1]=max(dist[a1],b1);
			}
		}
	}
	for(i=1000000-1;i>=0;i--)
	{
		dist[i]=max(dist[i],dist[i+1]);
	}
	ll ans=INT_MAX;
	for(i=0;i<=1000000;i++)
	{
		ans=min(ans,i+ dist[i]);
	}
	//cout<<dist[3]<<" ";
	cout<<ans;
}