#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll n;
string s;
ll dp[200001][4][4];
ll power[200002];
ll mod=1e9+7;
ll cnt=0;
ll func(ll ind,ll ctr,ll ques)
{
	//cout<<ind<<' '<<ctr<<' '<<ques<<endl;
	if(ind==n)
	{
		if(ctr==3)
			return power[cnt-ques];
		else
			return 0;
	}
	if(dp[ind][ctr][ques]!=-1)
	{
		return dp[ind][ctr][ques];
	}
	ll ret=0;
	if(s[ind]=='a' and ctr==0)
	{
		ret+=func(ind+1,ctr+1,ques);
	}
	if(s[ind]=='b' and ctr==1)
	{
		ret+=func(ind+1,ctr+1,ques);
	}
	if(s[ind]=='c' and ctr==2)
	{
		ret+=func(ind+1,ctr+1,ques);
	}
	if(s[ind]=='?' and ctr<3)
	{
		ret+=func(ind+1,ctr+1,ques+1);
	}
	ret%=mod;
	ret+=func(ind+1,ctr,ques);
	ret%=mod;
	return dp[ind][ctr][ques]=ret;
}
int main()
{
	ll i,j,k,m,t;
	cin>>n>>s;
	for(i=0;i<n;i++)
	if(s[i]=='?')
	cnt++;
	power[0]=1;
	for(i=1;i<=n;i++)
	{
		power[i]=power[i-1]*3;
		power[i]%=mod;
	}
	for(i=0;i<=n;i++)
	{
		for(j=0;j<4;j++)
		{
			for(k=0;k<4;k++)
			{
				dp[i][j][k]=-1;
			}
		}
	}
	//cout<<dp[87][46][46]<<endl;
	cout<<func(0,0,0);
}