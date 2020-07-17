#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool srtOrder(pair<ll,ll> a,pair<ll,ll> b)
{
	if(a.first==b.first)
		return a.second<b.second;
	else
		return a.first<b.first;
}
int main()
{
	ll i,j,k,m,n,start,end;
	cin>>n;
	vector<ll> v,v1;
	for(i=0;i<n;i++)
	{
		cin>>j>>k;
		v.push_back(j);
		v1.push_back(k);
	}
	sort(v.begin(),v.end());
	sort(v1.begin(),v1.end());
	start=0,end=0;
	ll x=v[0],ctr=0;
	ll px=x;
	map<ll,ll> mp2;
	while(start<n and x==v[start])
	{
		start++;
		ctr++;
	}
	//cout<<ctr<<endl;
	map<ll,ll> mp;
	mp[ctr]+=1;
	while(end<n)
	{
//		cout<<"S";
//		cout<<x<<' ';
		if(start==n) x=v1[end];
		else
		{
			x=min(v[start],v1[end]);
		}
//		cout<<x<<endl;
		ll y=x;
		mp[ctr]+=x-px-1;
		px=x;
		while(start<n and v[start]==x)
		{
			start++;
			ctr++;
		}
		mp[ctr]++;
		while(end<n and v1[end]==x)
		end++,ctr--;
//		cout<<' '<<start<<' '<<end<<endl;
	}
	for(i=1;i<=n;i++)
	cout<<mp[i]<<' ';
	cout<<endl;
}
/*
5
0 5
1 3
2 2
3 3
4 4
*/