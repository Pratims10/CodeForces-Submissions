#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll a,b,c,mx,n,m,i,j,k;
	cin>>n>>k;
	ll ar[n];
	for(i=0;i<n;i++)
	cin>>ar[i];
	mx=1;
	ll arr[n];
	ll size=0;
	ll e=0,o=0;
	for(i=0;i<n;i++)
	{
		if(ar[i]%2==0)
		e++;
		else o++;
		if(o==e&&i!=n-1)
		arr[size++]=abs(ar[i+1]-ar[i]);
	}
	if(o!=e)
	cout<<0;
	else
	{
		sort(arr,arr+size);
	//	for(i=0;i<size;i++)
	//	cout<<arr[i]<<' ';
	//	cout<<endl;
		ll ctr=0,s=0;
		for(i=0;i<size;i++)
		{
			s+=arr[i];
			if(s<=k)
			ctr++;
			else break;
		}
		cout<<ctr;
	}
}