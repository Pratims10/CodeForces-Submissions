#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,t,n;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		ll ar[n];
		for(i=0;i<n;i++)
		cin>>ar[i];
		sort(ar,ar+n);
		ar[n-1]+=ar[n-2];
		ar[n-2]=0;
		sort(ar,ar+n);
		k--;
		ll pos=n-2;
		while(pos>=0 and k--)
		{
			ar[n-1]+=ar[pos];
			pos--;
		}
		cout<<ar[n-1]<<endl;
	}
}