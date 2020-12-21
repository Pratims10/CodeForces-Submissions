#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool srt(pair<ll,ll> a,pair<ll,ll> b)
{
	return a.first>b.first;
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		ll w;
		cin>>n>>w;
		ll ar[n];
		vector<pair<ll,ll>> v1;
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
			v1.push_back({ar[i],i});
		}
	//	sort(ar,ar+n,srt);
		sort(v1.begin(),v1.end(),srt);
		i=0;
		while(i<n and v1[i].first>w)
		i++;
		if(i==n)
		{
			cout<<-1<<'\n';
			continue;
		}
		ll l=w/2;
		if(w%2==1)
		l++;
		ll r=w;
		ll s=0;
		vector<ll> v;
		while(i<n and s<l)
		{
			s+=v1[i].first;
			v.push_back(v1[i].second);
			i++;
		}
		if(s>=l and s<=r)
		{
			cout<<v.size()<<'\n';
			for(auto x:v)
			cout<<x+1<<' ';
			cout<<'\n';
		}
		else
		cout<<-1<<'\n';
	}
}