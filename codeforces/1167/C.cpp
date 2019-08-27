#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll root(ll ar[],ll i)
{
	while(i!=ar[i])
	{
//		cout<<i<<' ';
		i=ar[i];
	}
//	cout<<endl;
	return i;
}
void join(ll ar[],ll size[],ll i,ll j)
{
	ll ri=root(ar,i);
	ll rj=root(ar,j);
	if(ri==rj)
	return;
	else
	{
		if(size[ri]<size[rj])
		{
			ar[ri]=rj;
			size[rj]+=size[ri];
		}
		else
		{
			ar[rj]=ri;
			size[ri]+=size[rj];
		}
	}
}
int main()
{
	ll i,j,k,x,m,n;
	cin>>n>>m;
	ll ar[n],size[n];
	for(i=0;i<n;i++)
	{
		ar[i]=i;
		size[i]=1;
	}
	for(i=0;i<m;i++)
	{
		cin>>x;
		if(x!=0)
		{
			x--;
			cin>>j;
		}
		for(ll p=0;p<x;p++)
		{
			cin>>k;
			join(ar,size,j-1,k-1);
		}
	}
	unordered_map<ll,ll> mp;
	for(i=0;i<n;i++)
	ar[i]=root(ar,ar[i]);
	for(i=0;i<n;i++)
	mp[ar[i]]++;
	for(i=0;i<n;i++)
	cout<<mp[ar[i]]<<' ';
}