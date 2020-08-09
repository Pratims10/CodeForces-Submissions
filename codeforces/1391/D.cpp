#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,m;
ll dp[1000001][2][2][2];
ll dp1[1000001][2][2];
string s[1000001];
bool chk(ll a1,ll b1,ll c1,ll a2,ll b2,ll c2)
{
	if((a1+a2+b1+b2)%2==1)
	{
		if((b1+b2+c1+c2)%2==1)
		return true;
	}
	return false;
}
ll cnt(ll ind,ll a,ll b,ll c)
{
	ll ctr=0;
	if(s[0][ind]!=(char)(a+'0'))
	ctr++;
	if(s[1][ind]!=(char)(b+'0'))
	ctr++;
	if(s[2][ind]!=(char)(c+'0'))
	ctr++;
	return ctr;
}
bool chk(ll a1,ll b1,ll a2,ll b2)
{
	if((a1+a2+b1+b2)%2==1)
	{
		return true;
	}
	return false;
}
ll cnt(ll ind,ll a,ll b)
{
	ll ctr=0;
	if(s[0][ind]!=(char)(a+'0'))
	ctr++;
	if(s[1][ind]!=(char)(b+'0'))
	ctr++;
	return ctr;
}
ll func(ll ind,ll a,ll b,ll c)
{
	if(ind==m){
		return 0;
	}
	if(dp[ind][a][b][c]!=-1) return dp[ind][a][b][c];
	ll ret=INT_MAX;
	if(ind==0)
	{
		ret=min(ret,cnt(ind,0,0,0)+func(ind+1,0,0,0));
		ret=min(ret,cnt(ind,0,0,1)+func(ind+1,0,0,1));
		ret=min(ret,cnt(ind,0,1,0)+func(ind+1,0,1,0));
		ret=min(ret,cnt(ind,0,1,1)+func(ind+1,0,1,1));
		ret=min(ret,cnt(ind,1,0,0)+func(ind+1,1,0,0));
		ret=min(ret,cnt(ind,1,0,1)+func(ind+1,1,0,1));
		ret=min(ret,cnt(ind,1,1,0)+func(ind+1,1,1,0));
		ret=min(ret,cnt(ind,1,1,1)+func(ind+1,1,1,1));
	}
	else
	{
		ll ctr;
		if(chk(a,b,c,0,0,0))
		ret=min(ret,cnt(ind,0,0,0)+func(ind+1,0,0,0));
		if(chk(a,b,c,0,0,1))
		ret=min(ret,cnt(ind,0,0,1)+func(ind+1,0,0,1));
		if(chk(a,b,c,0,1,0))
		ret=min(ret,cnt(ind,0,1,0)+func(ind+1,0,1,0));
		if(chk(a,b,c,0,1,1))
		ret=min(ret,cnt(ind,0,1,1)+func(ind+1,0,1,1));
		if(chk(a,b,c,1,0,0))
		ret=min(ret,cnt(ind,1,0,0)+func(ind+1,1,0,0));
		if(chk(a,b,c,1,0,1))
		ret=min(ret,cnt(ind,1,0,1)+func(ind+1,1,0,1));
		if(chk(a,b,c,1,1,0))
		ret=min(ret,cnt(ind,1,1,0)+func(ind+1,1,1,0));
		if(chk(a,b,c,1,1,1))
		ret=min(ret,cnt(ind,1,1,1)+func(ind+1,1,1,1));
	}
	return dp[ind][a][b][c]=ret;
}
ll func1(ll ind,ll a,ll b)
{
	//cout<<ind<<' '<<m<<endl;
	if(ind==m){
		//cout<<' '<<ind<<' ';
		return 0;
	}
	if(dp1[ind][a][b]!=-1) return dp1[ind][a][b];
	ll ret=INT_MAX;
	if(ind==0)
	{
		ret=min(ret,cnt(ind,0,0)+func1(ind+1,0,0));
		ret=min(ret,cnt(ind,0,1)+func1(ind+1,0,1));
		ret=min(ret,cnt(ind,1,0)+func1(ind+1,1,0));
		ret=min(ret,cnt(ind,1,1)+func1(ind+1,1,1));
	}
	else
	{
		ll ctr;
		if(chk(a,b,0,0))
		ret=min(ret,cnt(ind,0,0)+func1(ind+1,0,0));
		if(chk(a,b,0,1))
		ret=min(ret,cnt(ind,0,1)+func1(ind+1,0,1));
		if(chk(a,b,1,0))
		ret=min(ret,cnt(ind,1,0)+func1(ind+1,1,0));
		if(chk(a,b,1,1))
		ret=min(ret,cnt(ind,1,1)+func1(ind+1,1,1));
	}
	return dp1[ind][a][b]=ret;
}
int main()
{
	ll i,j,k,t;
	cin>>n>>m;
	for(i=0;i<n;i++)
	cin>>s[i];
	if(n>3 and m>3)
	{
		cout<<-1;
		return 0;
	}
	if(n==1)
	{
		cout<<0;
	}
	else if(n==2)
	{
		for(i=0;i<=m;i++)
		{
			for(j=0;j<2;j++)
			{
				for(k=0;k<2;k++)
				dp1[i][j][k]=-1;
			}
		}
		cout<<func1(0,0,0);
	}
	else
	{
		for(i=0;i<=m;i++)
		{
			for(j=0;j<2;j++)
			{
				for(k=0;k<2;k++)
				{
					for(ll l=0;l<2;l++)
					dp[i][j][k][l]=-1;
				}
			}
		}
		cout<<func(0,0,0,0);
	}
}