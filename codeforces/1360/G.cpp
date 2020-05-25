#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll a,b,t,i,j,k,m,n;
	cin>>t;
	for(ll test=1;test<=t;test++)
	{
		cin>>n>>m>>a>>b;
		ll ar[n][m];
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++) ar[i][j]=0;
		}
		ll pos=a;
		for(i=0;i<a;i++)
		ar[0][i]=1;
		for(i=1;i<n;i++)
		{
			ll st=abs(pos%m);
			for(j=0;j<a;j++)
			{
				ar[i][pos%m]=1;
				pos++;
			}
		}
		bool fl=true;
		for(i=0;i<n;i++)
		{
			ll ctr=0;
			for(j=0;j<m;j++)
			ctr+=ar[i][j];
			if(ctr!=a){
				fl=false; break;
			}
		}
		for(i=0;i<m;i++)
		{
			ll ctr=0;
			for(j=0;j<n;j++)
			ctr+=ar[j][i];
			if(ctr!=b) fl=false;
		}
		if(!fl) cout<<"NO\n";
		else
		{
			cout<<"YES\n";
			for(i=0;i<n;i++)
			{
				for(j=0;j<m;j++)
				cout<<ar[i][j];
				cout<<endl;
			}
		}
	}
}