#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,m,k;
string s[1001];
ll dist[1001][1001];
bool vis[1001][1001];
string ans;
bool check(ll a,ll b)
{
	if(a==-1 or b==-1 or a==n or b==m  or s[a][b]=='*')
		return false;
	else
		return true;
}
void traverse(ll x,ll y,ll k)
{
	if(k==0)
	{
		cout<<ans;
		exit(0);
	}
	if(check(x+1,y) and dist[x+1][y]<k)
	{
		ans+='D';
		traverse(x+1,y,k-1);
	}
	else if(check(x,y-1) and dist[x][y-1]<k)
	{
		ans+='L';
		traverse(x,y-1,k-1);
	}
	else if(check(x,y+1) and dist[x][y+1]<k)
	{
		ans+='R';
		traverse(x,y+1,k-1);
	}
	else if(check(x-1,y) and dist[x-1][y]<k)
	{
		ans+='U';
		traverse(x-1,y,k-1);
	}
	else
	{
		cout<<"IMPOSSIBLE";
		exit(0);
	}
}
int main()
{
	ll i,j,k,t;
	cin>>n>>m>>k;
	if(k%2==1)
	{
		cout<<"IMPOSSIBLE";
		return 0;
	}
	for(i=0;i<n;i++)
	{
		cin>>s[i];
	}
	ll x,y;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		if(s[i][j]=='X')
		{
			x=i;
			y=j;
			break;
		}
	}
	dist[x][y]=0;
	for(i=0;i<=n;i++)
	{
		for(j=0;j<m;j++)
		vis[i][j]=false;
	}
	//BFS
	list<pair<ll,ll>> q;
	q.push_back({x,y});
	vis[x][y]=true;
	while(!q.empty())
	{
		pair<ll,ll> p=q.front();
		q.pop_front();
		vector<pair<ll,ll>> v={{0,1},{0,-1},{1,0},{-1,0}};
		for(auto i:v)
		{
			ll a=p.first+i.first;
			ll b=p.second+i.second;
			if(a==-1 or b==-1 or a==n or b==m or vis[a][b] or s[a][b]=='*')
			continue;
			q.push_back({a,b});
			vis[a][b]=true;
			dist[a][b]=dist[p.first][p.second]+1;
		}
	}
	traverse(x,y,k);
}