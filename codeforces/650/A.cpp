#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,ctr,a,b;
	cin>>n;
	vector<pair<ll,ll> >ar;
	map<ll,ll> f1,f2;
	for(i=0;i<n;i++)
	{
		cin>>a>>b;
		ar.push_back({a,b});
		f1[a]++;
		f2[b]++;
	}
	ctr=0;
	for(i=0;i<n;i++)
	{
		if(f1[ar[i].first]!=-1)
		{
			ll x=f1[ar[i].first];
//			cout<<x<<' ';
			ctr+=(x*(x-1))/2;
			f1[ar[i].first]=-1;
		}
		if(f2[ar[i].second]!=-1)
		{
			ll x=f2[ar[i].second];
			ctr+=(x*(x-1))/2;
//			cout<<x<<"  ";
			f2[ar[i].second]=-1;
		}
	}
//	cout<<endl;
//	cout<<ctr<<endl;
	map<pair<ll,ll>,ll> mp;
	for(i=0;i<n;i++)
	{
		mp[ar[i]]++;
	}
	for(i=0;i<n;i++)
	{
		if(mp[ar[i]]!=-1)
		{
			ll x=mp[ar[i]];
			ctr-=(x*(x-1))/2;
		}
		mp[ar[i]]=-1;
	}
	cout<<ctr<<endl;
}