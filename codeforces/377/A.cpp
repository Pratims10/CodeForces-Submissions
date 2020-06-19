#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,m,k,x,ctr=0,stop=0;
map<pair<ll,ll>,ll> mp;
string s[501];
void dfs(ll a,ll b)
{
	if(a==-1 or b==-1 or a==n or b==m or mp[{a,b}] or s[a][b]=='#' or stop) return;
	ctr++;
	mp[{a,b}]=1;
	//cout<<a<<' '<<b<<endl;
	if(ctr==x) {
		stop=1;
		return;
	}
	dfs(a+1,b);
	dfs(a-1,b);
	dfs(a,b+1);
	dfs(a,b-1);
}
int main()
{
	ll i,j,emp=0;
	cin>>n>>m>>k;
	for(i=0;i<n;i++)
	{
		cin>>s[i];
		for(auto it:s[i]) if(it=='.') emp++;
	}
	x=emp-k;
	ll px=-1,py=-1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++) if(s[i][j]=='.')
		{
			px=i;
			py=j;
			break;
		}
		if(px!=-1) break;
	}
	dfs(px,py);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		if(s[i][j]=='.' and !mp[{i,j}]) s[i][j]='X';
		cout<<s[i]<<endl;
	}
}