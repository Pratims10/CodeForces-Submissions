#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,k,i,j;
	cin>>n>>k;
	ll ar[n],dp[n];
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
		dp[i]=ar[i];
	}
	if(n==1)
	{
		cout<<0<<endl<<ar[0]<<endl;
		return 0;
	}
	for(i=0;i<n-1;i++)
	{
		if(k>(ar[i]+ar[i+1]))
		ar[i+1]+=k-ar[i]-ar[i+1];
	}
	ll ans=0;
	for(i=0;i<n;i++)
	ans+=ar[i]-dp[i];
	cout<<ans<<endl;
	for(i=0;i<n;i++)
	cout<<ar[i]<<' ';
	cout<<endl;
}