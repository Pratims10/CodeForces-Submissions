#include<bits/stdc++.h>
using namespace std;
#define ll long long int
map<ll,ll> possibleSums;
void mergeSort(ll arr[],ll l,ll r)
{
	ll mn = INT_MAX,mx = 0;
	ll s = 0;
	for(int i=l;i<=r;i++)
	{
		s += arr[i];
		mn=min(mn,arr[i]);
		mx=max(mx,arr[i]);
	}
	possibleSums[s] = 1;
    if(l >= r or mx==mn)
	{
        return;
    }
    ll m = (mx + mn) / 2;
    vector<ll> v1,v2;
    for(int i=l; i<=r; i++)
    {
    	if(arr[i]<=m)
    	v1.push_back(arr[i]);
    	else
    	v2.push_back(arr[i]);
	}
	ll pos=l+v1.size()-1;
	ll p=l;
	for(auto x:v1)
	arr[p++]=x;
	for(auto x:v2)
	arr[p++]=x;
    mergeSort(arr,l,l+v1.size()-1);
    mergeSort(arr,pos+1,r);
}
int main()
{
	ll i,j,k,m,n,t,q;
	cin>>t;
	while(t--)
	{
		cin>>n>>q;
		possibleSums.clear();
		ll ar[n];
		for(i=0;i<n;i++)
		cin>>ar[i];
		mergeSort(ar, 0, n - 1);
		while(q--)
		{
			cin>>i;
			if(possibleSums[i])
			cout<<"Yes\n";
			else
			cout<<"No\n";
		}
	}
}