#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,a;
	cin>>a;
	string s;
	cin>>s;
	n=s.length();
	map<ll,ll> mp;
	for(i=0;i<n;i++)
	{
		ll sum=0;
		for(j=i;j<n;j++)
		{
			sum+=s[j]-'0';
			mp[sum]++;
		}
	}
	//cout<<mp[0]<<' ';
	ll ans=0;
	for(i=0;i<n;i++)
	{
		ll sum=0;
		for(j=i;j<n;j++)
		{
			sum+=s[j]-'0';
			if(a!=0)
			{
				if(sum>0 and a%sum==0)
				ans+=mp[a/sum];
			}
			else
			{
				if(sum>0) ans+=2*mp[0];
			}
		}
	}
	if(a==0) ans=n*mp[0]*(n+1)-mp[0]*mp[0];
	cout<<ans;
}