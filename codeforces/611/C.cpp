#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n>>m;
	string s[n];
	for(i=0;i<n;i++)
	cin>>s[i];
	ll dp[n][m]={0};
	for(i=1;i<m;i++)
	{
		if(s[0][i]=='.' and s[0][i-1]=='.')
		dp[0][i]=dp[0][i-1]+1;
		else dp[0][i]=dp[0][i-1];
	}
	for(i=1;i<n;i++)
	{
		if(s[i][0]=='.' and s[i-1][0]=='.')
		dp[i][0]=dp[i-1][0]+1;
		else dp[i][0]=dp[i-1][0];
	}
	for(i=1;i<n;i++)
	{
		for(j=1;j<m;j++)
		{
			dp[i][j]=dp[i][j-1]+dp[i-1][j]-dp[i-1][j-1];
			if(s[i][j]=='.' && s[i][j-1]=='.')
			dp[i][j]++;
			if(s[i][j]=='.' && s[i-1][j]=='.')
			dp[i][j]++;
/*			if(s[i-1][j-1]=='.' and s[i-1][j]=='.')
			dp[i][j]++;
			if(s[i][j-1]=='.' and s[i-1][j-1]=='.')
			dp[i][j]++;*/
		}
	}
	ll h[n][m]={0},v[n][m]={0};
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		v[i][j]=h[i][j]=0;
	}
	for(i=1;i<m;i++)
	{
		if(s[0][i]=='.' and s[0][i-1]=='.')
		h[0][i]=1;
	}
	for(i=1;i<n;i++)
	{
		for(j=1;j<m;j++)
		{
			if(s[i][j]=='.' and s[i][j-1]=='.')
			h[i][j]=1;
		}
	}
	for(i=1;i<m;i++)
	{
		for(j=1;j<n;j++)
		{
			h[j][i]+=h[j-1][i];
		}
	}
	
	
	for(i=1;i<n;i++)
	{
		if(s[i][0]=='.' and s[i-1][0]=='.')
		v[i][0]=1;
	}
	for(i=1;i<m;i++)
	{
		for(j=1;j<n;j++)
		{
			if(s[j][i]=='.' and s[j-1][i]=='.')
			v[j][i]=1;
		}
	}
	for(i=1;i<n;i++)
	{
		for(j=1;j<m;j++)
		{
			v[i][j]+=v[i][j-1];
		}
	}
	
	
/*	for(i=0;i<=1;i++)
	{
		for(j=0;j<=4;j++)
		cout<<dp[i][j]<<' ';
		cout<<endl;
	}*/
	ll q;
	cin>>q;
	while(q--)
	{
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		a--;b--;c--;d--;
		ll ans=dp[c][d];
		if(a>0)
		ans-=dp[a-1][d];
		if(b>0)
		ans-=dp[c][b-1];
		if(a>0 and b>0)
		ans+=dp[a-1][b-1];
//		cout<<ans<<' ';
		
		ans-=v[a][d];
		if(b>0)
		ans+=v[a][b-1];
//		cout<<ans<<' ';
		
		ans-=h[c][b];
		if(a>0)
		ans+=h[a-1][b];
		cout<<ans<<endl;
	}
}
/*
2 20
.#..................
....................
1
1 3 1 13
*/