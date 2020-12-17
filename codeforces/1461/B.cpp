#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		ll dp[n][m];
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			dp[i][j]=0;
		}
		string s[n];
		for(i=0;i<n;i++)
		cin>>s[i];
		for(i=0;i<m;i++)
		if(s[n-1][i]=='*')
			dp[n-1][i]=1;
		for(i=n-2;i>=0;i--)
		{
			if(s[i][0]=='*')
			dp[i][0]=1;
			if(s[i][m-1]=='*')
			dp[i][m-1]=1;
			for(j=1;j<m-1;j++)
			{
				if(s[i][j]=='*')
				{
					ll x=min(dp[i+1][j-1], min(dp[i+1][j], dp[i+1][j+1]));
					dp[i][j]=x+1;
				}
			}
		}
		ll ans=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				ans+=dp[i][j];
			}
		}
		cout<<ans<<'\n';
	}
}