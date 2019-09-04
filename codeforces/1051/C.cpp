#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,l,r;
	cin>>n;
	ll ar[n];
	for(i=0;i<n;i++)
	cin>>ar[i];
	string s;
	for(i=0;i<n;i++)
	s+='A';
	ll f[101]={0};
	for(i=0;i<n;i++)
	f[ar[i]]++;
	ll ctr=0;
	ll arr[n],size=0;
	for(i=0;i<=100;i++)
	{
		if(f[i]==1)
		{
			ctr++;
			arr[size++]=i;
		}
	}
	ll q=1;
	if(ctr%2==1)
	{
		for(i=0;i<size;i++)
		{
			for(j=0;j<n;j++)
			if(ar[j]==arr[i])
			{
				if(q==1)
				s[j]='A';
				else s[j]='B';
				q*=-1;
			}
		}
		ctr=0;
		for(i=0;i<=100;i++)
		if(f[i]>2)
		{
			ctr=i;
			break;
		}
		if(ctr>=1)
		{
			for(i=0;i<n;i++)
			{
				if(ar[i]==ctr)
				{
					s[i]='B';
					break;
				}
			}
		}
		else
		{
			cout<<"NO\n";
			return 0;
		}
	}
	else
	{
		for(i=0;i<size;i++)
		{
			for(j=0;j<n;j++)
			if(ar[j]==arr[i])
			{
				if(q==1)
				s[j]='A';
				else s[j]='B';
				q*=-1;
			}
		}
	}
	cout<<"YES\n";
	cout<<s<<endl;
}