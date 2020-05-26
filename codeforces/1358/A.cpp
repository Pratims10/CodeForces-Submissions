#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		ll ans=(m/2)*n;
		if(m%2) ans+=ceil(n/2.0);
		swap(m,n);
		ll ans1=(m/2)*n;
		if(m%2) ans1+=ceil(n/2.0);
		ans=min(ans,ans1);
		cout<<ans<<endl;
	}
}