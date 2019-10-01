#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool search(ll ar[],ll n,ll x)
{
	for(ll i=0;i<n;i++)
	if(ar[i]==x)
	return true;
	return false;
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>n>>k;
	ll ar[n];
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	ll size=0;
	ll arr[1000];
	for(i=0;i<n;i++)
	{
			if((size<k && !search(arr,size,ar[i]))||(!search(arr,size,ar[i])&&size==k))
			{
				for(j=size;j>=1;j--)
				arr[j]=arr[j-1];
				arr[0]=ar[i];
				if(size<k)
				size++;
				else if(size>k)
				size--;
			}
			
	}
	cout<<size<<endl;
	for(i=0;i<size;i++)
	cout<<arr[i]<<' ';
}