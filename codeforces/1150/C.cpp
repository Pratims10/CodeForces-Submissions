#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n;
	cin>>n;
	ll o,t,i,j,k;
	o=t=0;
	ll ar[n];
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
		if(ar[i]==1) o++;
		else t++;
	}
	if(n==1)
	{
		cout<<ar[0];
		return 0;
	}
	ll ans[n],pos=0;
	if(t>=1 and o>=1)
	{
		ans[pos++]=2,t--;
		ans[pos++]=1,o--;
	}
	else
	{
		for(i=0;i<n;i++)
		{
			if(t!=0)
			cout<<2<<' ';
			else cout<<1<<' ';
		}
		return 0;
	}
	for(i=2;i<n;i++)
	{
		if(t!=0)
		{
			ans[pos]=2;
			t--,pos++;
		}
		if(o!=0 and t==0)
		{
			ans[pos]=1;
			o--,pos++;
		}
	}
	for(i=0;i<pos;i++)
	cout<<ans[i]<<' ';
}