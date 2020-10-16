#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		list<ll> q;
		for(i=1;i<=n;i++)
		q.push_back(i);
		vector<pair<ll,ll>> v;
		while(q.size()>1)
		{
			ll a=q.back();
			q.pop_back();
			ll b=q.back();
			q.pop_back();
			ll x=round((a*1.0+b*1.0)/2.0);
			q.push_back(x);
			v.push_back({a,b});
		}
		cout<<q.front()<<endl;
		for(auto x:v)
		cout<<x.first<<' '<<x.second<<'\n';
	}
}