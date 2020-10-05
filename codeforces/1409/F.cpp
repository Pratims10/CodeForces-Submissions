#include<bits/stdc++.h>
using namespace std;
#define ll long long int
string s1,s2;
ll n,k;
ll dp[201][201][201];
ll func(ll ind,ll k,ll ctra)
{
	if(k<0)
	return INT_MIN;
	if(ind==n)
	return 0;
	if(dp[ind][k][ctra]!=-1)
	return dp[ind][k][ctra];
	ll ret=0;
	if(s1[ind]==s2[1])
	ret=max(ret,ctra+func(ind+1,k,ctra+(s2[1]==s2[0])));
	else
	{
		ret=max(ret,func(ind+1,k,ctra));
		ret=max(ret,ctra+func(ind+1,k-1,ctra+(s2[1]==s2[0])));
	}
	if(s1[ind]==s2[0])
	ret=max(ret,func(ind+1,k,ctra+1));
	else
	{
		ret=max(ret,func(ind+1,k,ctra));
		ret=max(ret,func(ind+1,k-1,ctra+1));
	}
	return dp[ind][k][ctra]=ret;
}
int main()
{
	ll i,j,m,t;
	cin>>n>>k;
	cin>>s1>>s2;
	for(i=0;i<=200;i++)
	{
		for(j=0;j<=200;j++)
		{
			for(ll x=0;x<=200;x++)
			{
				//for(ll y=0;y<2;y++)
				dp[i][j][x]=-1;
			}
		}
	}
	cout<<func(0,k,0);
}