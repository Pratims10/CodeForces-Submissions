#include<bits/stdc++.h>
using namespace std;
#define ll long long int
list<ll> ar[100001];
void dfs(ll deg[],ll n)
{
	bool vis[n];
	for(ll i=0;i<n;i++)
	vis[i]=false;
	long double prob[n];
	prob[0]=1.0;
	ll dist[n]={0};
	ll s=0;
	list<ll> q;
	q.push_back(s);
	vis[s]=true;
	dist[0]=0;
	while(!q.empty())
	{
		s=q.front();
		
		q.pop_front();
		for(auto x:ar[s])
		{
			if(!vis[x])
			{
				vis[x]=true;
				ll xx=dist[s]+1;
				q.push_back(x);
				dist[x]=xx;
				if(s==0)
				prob[x]=prob[s]*((ar[s].size()*1.0));
				else
				prob[x]=prob[s]*(((ar[s].size()-1.0)*1.0));
			}
		}
	}
	if(n==1)
	{
		cout<<dist[0]<<endl;
	}
	else
	{
		long double ans=0.0;
		ll ctr=0;
		for(ll i=1;i<n;i++)
		{
			if(deg[i]==1)
			{
				ans+=dist[i]*(1.0/prob[i]);
				ctr++;
//				cout<<dist[i]<<' '<<prob[i]<<endl;
			}
		}
		cout<<ans;
	}
}
int main()
{
	cout<<setprecision(20);
	ll i,j,k,m,n,t;
	cin>>n;
	ll deg[n]={0};
	for(i=1;i<n;i++)
	{
		cin>>j>>k;
		j--;k--;
		ar[j].push_back(k);
		ar[k].push_back(j);
		deg[j]++;
		deg[k]++;
	}
	dfs(deg,n);
}