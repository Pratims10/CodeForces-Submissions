#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		ll ar[n][m];
		ll ctr=0;
		ll s=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cin>>ar[i][j];
				if(ar[i][j]<0)
				ctr++;
				s+=abs(ar[i][j]);
			}
		}
		if(ctr%2==0)
		cout<<s<<"\n";
		else
		{
			ll mn=LLONG_MAX;
			for(i=0;i<n;i++)
			{
				for(j=0;j<m;j++)
				mn=min(mn,abs(ar[i][j]));
			}
			s-=2*mn;
			cout<<s<<'\n';
		}
	}
}