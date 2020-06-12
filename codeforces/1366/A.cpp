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
		ll ans=(a+b)/3;
		ans=min(ans,a);
		ans=min(ans,b);
		cout<<ans<<endl;
	}
}