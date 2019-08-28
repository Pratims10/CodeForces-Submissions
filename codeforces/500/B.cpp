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
	ll i,j,k,m,n;
	cin>>n;
	ll ar[n],arr[n],size[n];
	string s[n];
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
		arr[i]=i;
		size[i]=1;
	}
	for(i=0;i<n;i++)
	cin>>s[i];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(s[i][j]=='1')
			join(arr,size,i,j);
		}
	}
	for(i=0;i<n;i++)
	{
		arr[i]=root(arr,arr[i]);
	}
	ll a[n],sze=0;
	for(i=0;i<n;i++)
	{
		sze=0;
		for(j=0;j<n;j++)
		{
			if(arr[j]==i)
			a[sze++]=ar[j];
		}
		sort(a,a+sze);
		sze=0;
		for(j=0;j<n;j++)
		{
			if(arr[j]==i)
			ar[j]=a[sze++];
		}
	}
	for(i=0;i<n;i++)
	cout<<ar[i]<<' ';
}