#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[100001][6][2];
ll n,k,Z;
ll ar[100001];
ll func(ll ind,ll z,ll flag)
{
	if(ind+2*z==k) return 0;
	if(dp[ind][z][flag]!=-1) return dp[ind][z][flag];
	ll ret=0;
	if(flag==1)
	{
		ret=ar[ind+1]+func(ind+1,z,0);
	}
	else
	{
		if(ind>0 and z<Z)
		ret=ar[ind-1]+func(ind-1,z+1,1);
		ret=max(ret,ar[ind+1]+func(ind+1,z,0));
	}
	return dp[ind][z][flag]=ret;
}
int main()
{
	ll i,j,m,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k>>Z;
		for(i=0;i<n;i++)
		cin>>ar[i];
		for(i=0;i<=n;i++)
		{
			for(j=0;j<=5;j++)
			dp[i][j][0]=dp[i][j][1]=-1;
		}
		cout<<ar[0]+func(0,0,0)<<endl;
	}
}