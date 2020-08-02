
// Problem : A. Road To Zero
// Contest : Codeforces - Educational Codeforces Round 86 (Rated for Div. 2)
// URL : https://codeforces.com/contest/1342/problem/A
// Memory Limit : 256 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,t;
	cin>>t;
	while(t--)
	{
		ll x,y,a,b;
		cin>>x>>y>>a>>b;
		ll mx=max(x,y);
		ll mn=min(x,y);
		ll ans=mn*b+(mx-mn)*a;
		cout<<min(ans,a*(x+y))<<endl;
	}
}