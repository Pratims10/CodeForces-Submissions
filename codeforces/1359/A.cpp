#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,t,m,n;
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>k;
		ll x=n/k;
		ll ans;
		if(m<=x)
		ans=m;
		else
		{
			k--;
			ll ar[k]={0};
			ll j=m-x;
			i=0;
			while(j>0)
			{
				ar[i%k]++;
				i++;
				j--;
			}
			ll mx=0;
			for(i=0;i<k;i++)
			mx=max(mx,ar[i]);
			ans=x-mx;
		}
		cout<<ans<<'\n';
	}
}