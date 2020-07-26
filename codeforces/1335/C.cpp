
// Problem : C. Two Teams Composing
// Contest : Codeforces - Codeforces Round #634 (Div. 3)
// URL : https://codeforces.com/contest/1335/problem/C
// Memory Limit : 256 MB
// Time Limit : 2000 ms
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
		map<ll,ll> mp;
		for(i=0;i<n;i++)
			cin>>ar[i];
		for(i=0;i<n;i++)
			mp[ar[i]]++;
		ll x=mp.size();
		ll mx=0;
		for(auto x:mp)
		mx=max(mx,x.second);
		ll p=min(x-1,mx);
		p=max(p,min(x,mx-1));
		ll ans=min(n/2,p);
		cout<<ans<<'\n';
	}
}