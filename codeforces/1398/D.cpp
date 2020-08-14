#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll ar[201],br[201],cr[201];
ll dp[201][201][201];
ll a,b,c;
bool srt(ll a,ll b)
{
	return a>b;
}
bool check(ll pa,ll pb,ll pc,ll a,ll b,ll c)
{
	ll ctr=0;
	if(pa<a) ctr++;
	if(pb<b) ctr++;
	if(pc<c) ctr++;
	if(ctr<2)
		return false;
	else
		return true;
}
ll func(ll x,ll y,ll z)
{
	if(!check(x,y,z,a,b,c)) return 0;
	if(dp[x][y][z]!=-1) return dp[x][y][z];
	ll ret=0;
	if(x==a)
	{
		ret=br[y]*cr[z]+func(x,y+1,z+1);
	}
	else if(y==b)
	{
		ret=ar[x]*cr[z]+func(x+1,y,z+1);
	}
	else if(z==c)
	{
		ret=ar[x]*br[y]+func(x+1,y+1,z);
	}
	else
	{
		ret=max(ret,ar[x]*cr[z]+func(x+1,y,z+1));
		ret=max(ret,br[y]*cr[z]+func(x,y+1,z+1));
		ret=max(ret,ar[x]*br[y]+func(x+1,y+1,z));
	}
	return dp[x][y][z]=ret;
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>a>>b>>c;
	for(i=0;i<a;i++)
	cin>>ar[i];
	for(i=0;i<b;i++)
	cin>>br[i];
	for(i=0;i<c;i++)
	cin>>cr[i];
	sort(ar,ar+a,srt);
	sort(br,br+b,srt);
	sort(cr,cr+c,srt);
	for(i=0;i<=200;i++)
	{
		for(j=0;j<=200;j++)
		{
			for(k=0;k<=200;k++)
			dp[i][j][k]=-1;
		}
	}
	cout<<func(0,0,0)<<endl;
}