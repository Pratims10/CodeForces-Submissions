#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,a,b,s;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>n>>s;
		ll x=s/n;
		if(x<a)
		s-=x*n;
		else s-=a*n;
		if(s<=b)
		cout<<"YES\n";
		else cout<<"NO\n";
	}
}