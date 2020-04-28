#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n;
ll deg[100001];
list<ll> adj[100001];
ll c1[100001],c2[100001],c3[100001];
vector<ll> v;
void dfs(ll x,ll par)
{
	v.push_back(x);
	for(auto i:adj[x])
	{
		if(i==par) continue;
		dfs(i,x);
	}
}
ll func(string s)
{
	ll j=0,ret=0;
	for(auto i:v)
	{
		if(j==3) j=0;
		if(s[j]=='1')
		ret+=c1[i];
		else if(s[j]=='2')
		ret+=c2[i];
		else
		ret+=c3[i];
		j++;
	}
	return ret;
}
void fn(string s)
{
	ll j=0;
	ll ar[n];
	for(auto i:v)
	{
		if(j==3) j=0;
		ar[i]=s[j]-'0';
		j++;
	}
	for(ll i=0;i<n;i++)
	cout<<ar[i]<<' ';
}
int main()
{
	ll i,j,k,m,t;
	cin>>n;
	for(i=0;i<n;i++)
	cin>>c1[i];
	for(i=0;i<n;i++)
	cin>>c2[i];
	for(i=0;i<n;i++)
	cin>>c3[i];
	for(i=0;i<n-1;i++)
	{
		cin>>j>>k;
		j--,k--;
		adj[j].push_back(k);
		adj[k].push_back(j);
		deg[j]++;
		deg[k]++;
	}
	ll root,flag=true;
	for(i=0;i<n;i++)
	if(deg[i]>2)
	flag=false;
	else if(deg[i]==1)
	root=i;
	if(!flag)
	cout<<-1;
	else
	{
		dfs(root,-1);
		ll a,b,c,d,e,f;
		a=func("123");
		b=func("132");
		c=func("213");
		d=func("321");
		e=func("312");
		f=func("231");
		ll ans=min(a,min(b,min(c,min(d,min(e,f)))));
		cout<<ans<<endl;
		if(ans==a)
		fn("123");
		else if(ans==b) fn("132");
		else if(ans==c) fn("213");
		else if(ans==d) fn("321");
		else if(ans==e) fn("312");
		else fn("231");
	}
}