#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,n,m,t;
	cin>>n;
	ll ar[n];
	for(i=0;i<n;i++)
	cin>>ar[i];
	vector<pair<pair<ll,ll>,ll> > ans;
	if(n%2==1)
	{
		for(i=2;i<=n;i+=2)
		{
			ans.push_back({{i,i+1},1});
		}
		for(i=2;i<=n;i+=2)
		{
			ans.push_back({{i,i+1},1});
		}
	}
	else
	{
		ll x=0;
		for(i=0;i<n;i++)
		x^=ar[i];
		if(x!=0)
		{
			cout<<"NO\n";
			return 0;
		}
		n--;
		for(i=2;i<=n;i+=2)
		{
			ans.push_back({{i,i+1},1});
		}
		for(i=2;i<=n;i+=2)
		{
			ans.push_back({{i,i+1},1});
		}
	}
	cout<<"YES\n";
	cout<<ans.size()<<'\n';
	for(auto x:ans)
	cout<<x.first.first<<' '<<x.first.second<<' '<<x.second<<'\n';
}