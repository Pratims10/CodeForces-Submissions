#include<bits/stdc++.h>
using namespace std;
#define ll long long int
list<ll> adj[5000];
ll p[5000],s[5000]={0},deg[5000]={0};
bool vis[5000];
set<ll> printDistSum(vector<ll> arr)
{
	ll n=arr.size();
    ll sum = 0;
    for (ll i=0; i<n; i++)
        sum += arr[i];
    bool dp[n+1][sum+1];
    memset(dp, 0, sizeof(dp));
    for (ll i=0; i<=n; i++)
        dp[i][0] = true;
    for (ll i=1; i<=n; i++)
    {
        dp[i][arr[i-1]] = true;
        for (ll j=1; j<=sum; j++)
        {
            if (dp[i-1][j] == true)
            { 
                dp[i][j] = true; 
                dp[i][j + arr[i-1]] = true; 
            }
        }
    }
    set<ll> s;
    for (ll j=0; j<=sum; j++) 
        if (dp[n][j]==true)
            s.insert(j);
	return s;
}
void dfs(ll x)
{
	vis[x]=true;
	for(auto i:adj[x])
	{
		if(!vis[i])
		{
			p[i]=x;
			dfs(i);
			s[x]+=s[i];
		}
	}
	s[x]+=1;
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	for(i=0;i<n-1;i++)
	{
		cin>>j>>k;
		j--;k--;
		deg[j]++;
		deg[k]++;
		adj[j].push_back(k);
		adj[k].push_back(j);
	}
	memset(vis,false,sizeof(vis));
	p[0]=-1;
	dfs(0);
	set<pair<ll,ll> > st;
	for(i=0;i<n;i++)
	{
		if(deg[i]==1)
		continue;
		vector<ll> v;
		v.push_back(s[0]-s[i]);
		for(auto x:adj[i])
		{
			if(x!=p[i])
			v.push_back(s[x]);
		}
		set<ll> ss=printDistSum(v);
		for(auto x:ss)
		{
			if(x==0 or n-1-x==0)
			continue;
			st.insert({x,n-1-x});
			st.insert({n-1-x,x});
		}
	}
	cout<<st.size()<<endl;
	for(auto x:st)
	cout<<x.first<<' '<<x.second<<endl;
}