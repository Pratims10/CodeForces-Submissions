#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n>>m;
	ll ar[n+1];
	vector<pair<ll,ll>> v;
	list<ll> adj[n+1];
	for(i=0;i<m;i++)
	{
		cin>>j>>k;
		adj[j].push_back(k);
		adj[k].push_back(j);
	}
	for(i=1;i<=n;i++)
	{
		cin>>ar[i];
		v.push_back({ar[i],i});
	}
	sort(v.begin(),v.end());
	ll ans[n+1]={0};
	bool flag=true;
	for(i=1;i<=n;i++)
	{
		set<ll> st;
		for(auto x:adj[i])
		{
			if(ar[x]<ar[i])
			st.insert(ar[x]);
			else if(ar[x]==ar[i])
			{
				cout<<-1;
				return 0;
			}
		}
		if(!st.empty() and st.size()!=ar[i]-1)
		{
			flag=false;
			break;
		}
	}
	if(!flag) cout<<-1;
	else
	{
		for(i=0;i<n;i++)
		cout<<v[i].second<<' ';
	}
}