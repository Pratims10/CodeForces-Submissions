#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll root(ll ar[],ll i)
{
	while(i!=ar[i])
	i=ar[i];
	return i;
}
void join(ll ar[],ll size[],ll i,ll j)
{
	ll ri=root(ar,i);
	ll rj=root(ar,j);
	if(size[ri]>size[rj])
	{
		ar[rj]=ar[ri];
		size[ri]+=size[rj];
	}
	else
	{
		ar[ri]=ar[rj];
		size[rj]+=size[ri];
	}
}
int main()
{
	ll i,j,k,n,m;
	cin>>n;
	ll a[n],b[n],ar[n],size[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
		ar[i]=i;
		a[i]--;
		b[i]--;
		size[i]=1;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		if(i!=j && (a[i]==a[j] || b[i]==b[j]))
		{
			join(ar,size,i,j);
		}
	}
	unordered_map<ll,ll> mp;
	for(i=0;i<n;i++)
	{
		ar[i]=root(ar,ar[i]);
	}
	for(i=0;i<n;i++)
	{
		mp[ar[i]]++;
	}
	cout<<mp.size()-1<<endl;
}