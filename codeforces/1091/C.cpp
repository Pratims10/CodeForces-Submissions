#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,i,j,k;
	cin>>n;
	ll ar[100001],ctr=0;
	for(k=1;k<=sqrt(n)+1;k++)
	{
		if(n%k==0)
		{
			ar[ctr]=n/k+n*(n/k-1)/2;
			ctr++;
			ll kk=n/k;
			ar[ctr]=n/kk+n*(n/kk-1)/2;
			ctr++;
		}
	}
	ar[ctr++]=1;
	ar[ctr++]=n*(n+1)/2;
	sort(ar,ar+ctr);
	for(i=0;i<ctr;i++)
	{
		ll x=ar[i];
		cout<<x<<' ';
		while(ar[i]==x)
		i++;
		i--;
	}
	cout<<endl;
}