#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n,m,x,y;
string s[1001];
ll dp[1001][1001][2];
ll white[1001],black[1001];
ll func(ll ind,ll count,ll col)
{
	if(count>y) return INT_MAX;
	if(ind==m)
	{
		if(count>=x and count<=y) 
		{
			return 0;
		}
		else return INT_MAX;
	}
	if(dp[ind][count][col]!=-1) return dp[ind][count][col];
	ll ret=INT_MAX;
	/*if(count<x)
	{
		if(col==0)
		ret=min(ret,white[ind]+func(ind+1,count+1,col));
		else
		ret=min(ret,black[ind]+func(ind+1,count+1,col));
	}
	else if(count==y-1)
	{
		if(col==0)
		ret=min(ret,white[ind]+func(ind+1,0,1));
		else
		ret=min(ret,black[ind]+func(ind+1,0,0));
	}*/
	//else
	{
		if(col==0)
		{
			ret=min(ret,white[ind]+func(ind+1,count+1,col));
			if(count>=x)
			ret=min(ret,black[ind]+func(ind+1,1,1));
		}
		else
		{
			ret=min(ret,black[ind]+func(ind+1,count+1,col));
			if(count>=x)
			ret=min(ret,white[ind]+func(ind+1,1,0));
		}
	}
	return dp[ind][count][col]=ret;
	
}
int main()
{
	ll i,j,k,t;
	cin>>n>>m>>x>>y;
	for(i=0;i<n;i++)
	cin>>s[i];
	for(i=0;i<m;i++)
	{
		ll ctr=0;
		for(j=0;j<n;j++)
		if(s[j][i]=='.') ctr++;
		white[i]=ctr;
		black[i]=n-ctr;
	}
	for(i=0;i<=1000;i++)
	{
		for(j=0;j<=1000;j++)
		dp[i][j][0]=dp[i][j][1]=-1;
	}
	cout<<min(white[0]+func(1,1,0),black[0]+func(1,1,1));
}