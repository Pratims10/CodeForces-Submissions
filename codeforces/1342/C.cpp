
// Problem : C. Yet Another Counting Problem
// Contest : Codeforces - Educational Codeforces Round 86 (Rated for Div. 2)
// URL : https://codeforces.com/contest/1342/problem/C
// Memory Limit : 256 MB
// Time Limit : 3500 ms
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
		ll a,b;
		cin>>a>>b;
		ll x=max(a,b);
		ll y=min(a,b);
		ll lcm=(a*b)/__gcd(a,b);
		ll q,l,r;
		cin>>q;
		while(q--)
		{
			cin>>l>>r;
			l--;
			ll ans=r-l;
			l=ceil((l/lcm))*x+min(x,l%lcm+1);
			r=ceil((r/lcm))*x+min(x,r%lcm+1);
			cout<<ans-r+l<<' ';
		}
		cout<<'\n';
	}
}