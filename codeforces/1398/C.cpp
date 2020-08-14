#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool srt(ll a,ll b)
{
	return a>b;
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		string s;
		cin>>s;
		ll ar[n];
		for(i=0;i<n;i++)
		{
			ar[i]=s[i]-48;
			ar[i]--;
		}
		ll ctr=0,ans=0;
		map<ll,ll> mp;
		mp[0]=1;
		for(i=0;i<n;i++)
		{
			ctr+=ar[i];
			ans+=mp[ctr];
			mp[ctr]++;
		}
		cout<<ans<<endl;
	}
}