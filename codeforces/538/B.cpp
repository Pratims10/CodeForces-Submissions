#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll rev(ll);
ll count(ll);
int main()
{
	ll m,n,i,j,k;
	cin>>n;
	ll ctr=count(n);
	n=rev(n);
	ll ar[ctr];
	ll arr[n][ctr];
	j=n;
	for(i=0;i<ctr;i++)
	{
		ar[i]=n%10;
		n/=10;
	}
	n=j;
	ll x=0,y=0;
	while(true)
	{
		y=0;
		bool flg=false;
		for(i=0;i<ctr;i++)
		{
			if(ar[i]!=0)
			{
				flg=true;
				break;
			}
		}
		if(flg)
		{
			for(i=0;i<ctr;i++)
			{
				if(ar[i]!=0)
				{
					ar[i]--;
					arr[x][y++]=1;
				}
				else arr[x][y++]=0;
			}
		}
		else
		break;
		x++;
	}
	cout<<x<<endl;
	for(i=0;i<x;i++)
	{
		j=0;
		while(arr[i][j]==0)
		j++;
		for(;j<ctr;j++)
		cout<<arr[i][j];
		cout<<' ';
	}
}
ll rev(ll n)
{
	ll rev=0,r;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n/=10;
	}
	return rev;
}
ll count(ll n)
{
	ll c=0;
	while(n!=0)
	{
		n/=10;
		c++;
	}
	return c;
}
