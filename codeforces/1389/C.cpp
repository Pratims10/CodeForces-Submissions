#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[100001][6][2];
ll n,k,Z;
ll ar[100001];
ll func(ll ind,ll z,ll flag)
{
	if(ind+2*z==k) return ar[ind];
	if(dp[ind][z][flag]!=-1) return dp[ind][z][flag];
	ll ret=0;
	if(flag==1)
	{
		ret=ar[ind]+func(ind+1,z,0);
	}
	else
	{
		if(ind>0 and z<Z)
		ret=ar[ind]+func(ind-1,z+1,1);
		ret=max(ret,ar[ind]+func(ind+1,z,0));
	}
	return dp[ind][z][flag]=ret;
}
int main()
{
	ll i,j,m,t,k;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		n=s.length();
		ll ans=n-2;
		ll f[10]={0};
		for(i=0;i<n;i++)
		f[s[i]-'0']++;
		for(i=0;i<=9;i++)
		{
			ans=min(ans,n-f[i]);
		}
		for(i=0;i<=9;i++)
		{
			for(j=0;j<=9;j++)
			{
				if(i==j) continue;
				string s1;
				for(k=0;k<n;k++)
				if(s[k]==(char)(i+'0') or s[k]==(char)(j+'0'))
				s1+=s[k];
				ll ctr=1;
				for(k=1;k<s1.length();k++)
				if(s1[k]!=s1[k-1])
				ctr++;
				if(ctr%2==1) ctr--;
				ans=min(ans,n-ctr);
			}
		}
		cout<<ans<<endl;
	}
}