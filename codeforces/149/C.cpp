#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	vector<pair<ll,ll>> v;
	ll ar[n];
	for(i=0;i<n;i++)
	{
		cin>>j;
		v.push_back({j,i});
		ar[i]=j;
	}
	sort(v.begin(),v.end());
	ll mx=v[n-1].first;
	list<ll> a,b;
	ll sa=0,sb=0;
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			a.push_back(v[i].second);
			sa+=v[i].first;
		}
		else
		{
			b.push_back(v[i].second);
			sb+=v[i].first;
		}
	}
	if(sa>sb)
	{
		while(abs(sa-sb)>mx)
		{
			ll x=a.front();
			a.pop_front();
			sa-=ar[x];
			sb+=ar[x];
			b.push_back(x);
		}
	}
	else if(sa<sb)
	{
		while(abs(sa-sb)>mx)
		{
			ll x=b.front();
			b.pop_front();
			sb-=ar[x];
			sa+=ar[x];
			a.push_back(x);
		}
	}
	cout<<a.size()<<endl;
	for(auto x:a)
	{
		cout<<x+1<<' ';
	}
	cout<<endl;
	cout<<b.size()<<endl;
	for(auto x:b)
	{
		cout<<x+1<<' ';
	}
	cout<<endl;
}