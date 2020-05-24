#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll a,b,t,i,j,k,m,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll ar[n];
		ll mn=10000000;
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		sort(ar,ar+n);
		for(i=1;i<n;i++)
		{
			mn=min(mn,ar[i]-ar[i-1]);
		}
		cout<<mn<<endl;
	}
}