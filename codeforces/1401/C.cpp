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
		ll ar[n],b[n];
		ll mn=INT_MAX;
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
			b[i]=ar[i];
			mn=min(mn,b[i]);
		}
		sort(b,b+n);
		ll f=0;
		for(i=0;i<n;i++)
		{
			if(ar[i]!=b[i])
			{
				if(ar[i]%mn!=0)
				f=1;
			}
		}
		if(f) cout<<"NO\n";
		else cout<<"YES\n";
	}
}