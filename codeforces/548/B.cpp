#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,n,m,q;
	cin>>n>>m>>q;
	ll ar[n][m],b[n]={0};
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		cin>>ar[i][j];
		for(j=0;j<m;j++)
		{
			ll ctr=0;
			while(j<m&&ar[i][j]==1)
			{
				ctr++;
				j++;
			}
			b[i]=max(b[i],ctr);
		}
	}
	while(q--)
	{
		ll p,q;
		cin>>p>>q;
		p--;q--;
		ar[p][q]=!ar[p][q];
		ll x=0;
		for(i=0;i<m;i++)
		{
			ll ctr=0;
			while(i<m&&ar[p][i]==1)
			{
				ctr++;
				i++;
			}
			x=max(x,ctr);
		}
		b[p]=x;
		ll ans=0;
		for(i=0;i<n;i++)
		ans=max(ans,b[i]);
		cout<<ans<<endl;
	}
}