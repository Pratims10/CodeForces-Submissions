#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll q,n,k,i,j;
	cin>>n;
	ll ar[n];
	for(i=0;i<n;i++)
	cin>>ar[i];
	sort(ar,ar+n);
	ll ans=0;
	for(i=0;i<n;i+=2)
	{
		ans+=ar[i+1]-ar[i];
	}
	cout<<ans;
}