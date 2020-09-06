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
		ll ans=0,s=0;
		for(i=0;i<n;i++)
		{
			if(ar[i]<0)
			{
				if(s>0)
				{
					if(s>=abs(ar[i]))
					s-=abs(ar[i]);
					else
					{
						ans+=abs(ar[i])-s;
						s=0;
					}	
				}
				else
				ans+=-1*ar[i];
			}
			else
			s+=ar[i];
		}
		cout<<ans<<endl;
	}
}