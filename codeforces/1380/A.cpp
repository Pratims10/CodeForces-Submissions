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
		ll p[n];
		for(i=0;i<n;i++)
		cin>>p[i];
		ll a=-1,b=-1,c=-1;
		for(i=0;i<n;)
		{
			if(p[i]>p[i+1])
			{
				i++;
				continue;
			}
			while(p[i]<p[i+1])
			{
				a=i;
				b=i+1;
				i++;
			}
			if(a!=-1) break;
		}
		if(a!=-1)
		for(;i<n;i++)
		{
			if(p[i]<p[b])
			{
				c=i;
				break;
			}
		}
		if(c==-1)
		cout<<"NO\n";
		else
		{
			cout<<"YES\n";
			cout<<a+1<<' '<<b+1<<' '<<c+1<<'\n';
		}
	}
}