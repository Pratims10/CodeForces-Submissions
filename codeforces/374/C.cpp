#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,m;
string s[1001];
ll dp[1001][1001];
map<pair<ll,ll>,ll> mp;
ll dfs(ll x,ll y,ll z,ll px,ll py)
{
	//cout<<x<<' '<<y<<' '<<z<<' '<<px<<' '<<py<<endl;
	if(x==-1 or y==-1 or x==n or y==m) return 0;
	if(z==0 and s[x][y]!='D') return 0;
	if(z==1 and s[x][y]!='I') return 0;
	if(z==2 and s[x][y]!='M') return 0;
	if(z==3 and s[x][y]!='A') return 0;
	if(dp[x][y]!=-1) return dp[x][y];
	//cout<<"S\n";
	if(mp[{x,y}]==1)
	{
		cout<<"Poor Inna!";
		exit(0);
	}
	mp[{x,y}]=1;
	ll a,b,ret=0;
	
	a=x+1,b=y;
	if(a!=px || b!=py)
	{
		ret=max(ret,dfs(a,b,(z+1)%4,x,y));
	}
	a=x-1,b=y;
	if(a!=px or b!=py)
	{
		ret=max(ret,dfs(a,b,(z+1)%4,x,y));
	}
	a=x,b=y+1;
	if(a!=px or b!=py)
	{
		ret=max(ret,dfs(a,b,(z+1)%4,x,y));
	}
	a=x,b=y-1;
	if(a!=px or b!=py)
	{
		ret=max(ret,dfs(a,b,(z+1)%4,x,y));
	}
	if(z==3) ret++;
	return dp[x][y]=ret;
}
int main()
{
	ll i,j,k,t;
	cin>>n>>m;
	for(i=0;i<n;i++)
	cin>>s[i];
	for(i=0;i<=1000;i++)
	{
		for(j=0;j<=1000;j++)
		{
			dp[i][j]=-1;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		if(!mp[{i,j}])
		dfs(i,j,0,-1,-1);
	}
	ll x=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		x=max(x,dp[i][j]);
	}
	if(x==0)cout<<"Poor Dima!";
	else
	cout<<x;
}