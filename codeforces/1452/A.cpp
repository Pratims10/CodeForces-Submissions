#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,m,n,t;
	cin>>t;
	while(t--)
	{
		ll x,y;
		cin>>x>>y;
		ll ans=x+y;
		ll diff=abs(x-y);
		if(diff>0)
		ans+=diff-1;
		cout<<ans<<endl;
	}
}