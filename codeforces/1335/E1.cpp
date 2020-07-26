
// Problem : E1. Three Blocks Palindrome (easy version)
// Contest : Codeforces - Codeforces Round #634 (Div. 3)
// URL : https://codeforces.com/contest/1335/problem/E1
// Memory Limit : 256 MB
// Time Limit : 3000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll ar[n];
		for(i=0;i<n;i++)
		cin>>ar[i];
		ll f[n+1][27];
		for(i=0;i<=26;i++)
		f[0][i]=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<=26;j++)
			{
				f[i+1][j]=f[i][j];
			}
			f[i+1][ar[i]]++;
		}
		ll ans=1;
		for(i=0;i<=n;i++)
		{
			for(j=i+1;j<=n;j++)
			{
				ll mx=0,a=0;
				for(k=1;k<=26;k++)
				{
					mx=max(mx,2*min(f[n][k]-f[j][k],f[i][k]-f[0][k]));
				}
				for(k=1;k<=26;k++)
				a=max(a,f[j][k]-f[i][k]);
				a+=mx;
				ans=max(ans,a);
			}
		}
		cout<<ans<<'\n';
	}
}