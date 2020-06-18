#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll mod=1e9+7;
int main()
{
	ll i,j,k,m,n,t,x,y;
	cin>>n>>m;
	string s[n];
	for(i=0;i<n;i++) cin>>s[i];
	ll ans=1;
	for(i=0;i<m;i++)
	{
		map<char,ll> mp;
		for(j=0;j<n;j++) mp[s[j][i]]++;
		ans*=mp.size();
		ans%=mod;
	}
	cout<<ans;
}