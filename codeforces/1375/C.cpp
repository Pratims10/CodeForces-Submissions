#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll ar[n];
		for(i=0;i<n;i++)
			cin>>ar[i];
		if(ar[0]<=ar[n-1]) cout<<"YES\n";
		else cout<<"NO\n";
	}
}