#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		ll x,y;
		cin>>x>>y>>k;
		ll ctr=y*k+k-1;
		x--;
		ll ans=ctr/x;
		if(ctr%x!=0)
		ans++;
		cout<<ans+k	<<endl;
	}
}