#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s[51];
ll n,m;
map<pair<ll,ll>,ll > mp;

void block(ll x,ll y)
{
	if(x==-1 or y==-1 or x==n or y==m or s[x][y]=='G' or s[x][y]=='B')
	return ;
	s[x][y]='#';
}

void dfs(ll x,ll y)
{
	if(x==-1 or y==-1 or x==n or y==m or mp[{x,y}] or s[x][y]=='#') return ;
	mp[{x,y}]=1;
	dfs(x+1,y);
	dfs(x,y+1);
	dfs(x-1,y);
	dfs(x,y-1);
}

int main()
{
	ll i,j,k,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		for(i=0;i<n;i++)
		{
			cin>>s[i];
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(s[i][j]=='B')
				{
					block(i-1,j);
					block(i,j-1);
					block(i+1,j);
					block(i,j+1);
				}
			}
		}
		mp.clear();
		dfs(n-1,m-1);
		bool fl=true;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(s[i][j]=='G')
				{
					if(!mp[{i,j}]) fl=false;
				}
				else if(s[i][j]=='B')
				{
					if(mp[{i,j}]) fl=false;
				}
			}
		}
		if(fl)
		cout<<"Yes\n";
		else cout<<"No\n";
	}
}