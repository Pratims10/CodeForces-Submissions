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
		ll ans=1;
		sort(ar,ar+n);
		for(i=0;i<n;i++)
		{
			if(ar[i]<=ans) ans++;
			else
			{
				ll ctr=0;
				while(i<n)
				{
					ctr++;
					if(ar[i]<=ans+ctr-1) {
						ans=i+1;
						break;
					}
					i++;
				}
				if(ctr) i--;
			}
		}
		cout<<ans<<endl;
	}
}