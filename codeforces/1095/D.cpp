#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,t,n,m;
	cin>>n;
	vector<ll> adj[n];
	pair<ll,ll> p;
	for(i=0;i<n;i++)
	{
		cin>>j>>k;
		j--,k--;
		if(i==0)
		p=make_pair(j,k);
		adj[j].push_back(k);
		adj[k].push_back(j);
	}
	vector<ll> ans;
	ans.push_back(0);
	bool vis[n]={0};
	vis[0]=true;
	while(ans.size()<n)
	{
		for(auto x:adj[ans.back()])
		{
			if(!vis[x])
			{
				vis[x]=true;
				ans.push_back(x);
				break;
			}
		}
	}
	if(!(p.first==ans[1] or p.second==ans[1]))
	reverse(ans.begin(),ans.end());
	for(auto x:ans)
	cout<<x+1<<' ';
}