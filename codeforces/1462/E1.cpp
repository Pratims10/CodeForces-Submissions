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
		vector<ll>b(n);
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
			b[i]=ar[i];
		}
		sort(b.begin(),b.end());
		ll ans=0;
		for(i=0;i<n;i++)
		{
			ll x=b[i]-2;
			ll pos=lower_bound(b.begin(),b.end(),x)-b.begin();
			x=(i-pos);
			if(x>0)
			{
				ans+=x*(x-1)/2;
			}
		}
		cout<<ans<<'\n';
	}
}