#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,a,b;
	cin>>n;
	vector<pair<ll,ll>> v;
	v.push_back({0,0});
	v.push_back({0,1});
	for(i=1;i<=n;i++)
	{
		v.push_back({i,i});
		v.push_back({i,i-1});
		v.push_back({i,i+1});
	}
	v.push_back({n+1,n+1});
	v.push_back({n+1,n});
	cout<<v.size()<<endl;
	for(auto x:v)
	{
		cout<<x.first<<" "<<x.second<<endl;
	}
}