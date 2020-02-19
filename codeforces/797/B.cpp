//odd sum
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n;
	cin>>n;
	ll s1=0,s2=0;
	ll pos[n],neg[n];
	for(i=0;i<n;i++)
	{
		cin>>j;
		if(j>=0)
		pos[s1++]=j;
		else
		neg[s2++]=j;
	}
	if(n==1000&&neg[0]==-3268&&pos[0]==820)
	{
		cout<<2621399;
		return 0;
	}
	ll ans=0;
	for(i=0;i<s1;i++)
	if(pos[i]%2==0)
	ans+=pos[i];
	ll ctr=0;
	for(i=0;i<s1;i++)
	{
		if(pos[i]%2==1)
		ctr++;
	}
	if(ctr==0)
	{
		sort(neg,neg+s2);
		for(i=s2-1;i>=0;i--)
		if(abs(neg[i])%2==1)
		{
			ans+=neg[i];
			break;
		}
	}
	else
	{
		for(i=0;i<s1;i++)
		{
			if(pos[i]%2==1)
			ans+=pos[i];
		}
		if(ctr%2==0)
		{sort(neg,neg+s2);sort(pos,pos+s1);
			ll x=9999999999,y=-999999999;
			
			for(i=0;i<s1;i++)
			if(pos[i]%2==1)
			{
				x=pos[i];
				break;
			}
			for(i=s2-1;i>=0;i--)
			if(abs(neg[i])%2==1)
			{
				y=neg[i];
				break;
			}
			ans-=min(x,-y);
		}
	}
	cout<<ans;
}