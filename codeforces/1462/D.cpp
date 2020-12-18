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
		ll s=0;
		ll ans=INT_MAX;
		for(i=0;i<n;i++)
		{
			s+=ar[i];
			bool f=true;
			ll c=i;
			for(j=i+1;j<n;)
			{
				ll s1=0;
				ll ctr=0;
				while(j<n and s1<s)
				{
					s1+=ar[j++];
					ctr++;
				}
				if(s1!=s)
				f=false;
				else
				c+=ctr-1;
			}
			if(f)
			ans=min(ans,c);
		}
		cout<<ans<<'\n';
	}
}