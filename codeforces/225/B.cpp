#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n;
	cin>>n>>k;
	ll ar[100000];
	ar[0]=1;
	i=2;
	ar[1]=1;
	ll s=2;
	while(ar[i-1]<=1000000001)
	{
		ar[i]=s;
		s+=ar[i];
		if(i+1>k)
		s-=ar[i-k];
		i++;
	}
	ll x=i-2;
//	cout<<x<<' '<<ar[x]<<endl;
	ll ans[100000],size=0;
	for(i=x;i>=0;i--)
	{
		if(n>=ar[i])
		{
			n-=ar[i];
			ans[size++]=ar[i];
		}
	}
	cout<<size+1<<endl;
	cout<<"0 ";
	for(i=0;i<size;i++)
	cout<<ans[i]<<' ';
}