#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll ar[1000];
	ll size=0;
	ll i,j,k,m,n;
	ll s;
	cin>>n>>s;
	if(n==1)
	{
		if(s>=0&&s<=9)
		cout<<s<<' '<<s;
		else
		cout<<"-1 -1";
	}
	else
	{
	ll l,r;
	l=1;
	r=9*n;
	if(s>=l&&s<=r)
	{
		if(s<n)
		{
			//cout<<1;
			s--;
			ar[size++]=1;
			n--;
			for(i=0;i<n-s;i++)
			{
			//	cout<<0;
				ar[size++]=0;
			}
			for(;i<n;i++) ar[size++]=1;
			n++;
		}
		else
		{
			j=s/n;
			for(i=0;i<n;i++)
			ar[size++]=j;
			if(s%n!=0)
			{
				j=s%n;
				i=0;
				while(j!=0)
				{
					j--;
					ar[i++]++;
				}
			}
			sort(ar,ar+size);
		}
		l=0,r=size-1;
		while(l<r)
		{
			while(l<size && ar[l]==1 &&l==0) l++;
			while(l<size && ar[l]==0) l++;
			while(r>=0 && ar[r]==9) r--;
			if(l>=r) break;
			ar[l]--;
			ar[r]++;
		}
		for(i=0;i<size;i++)
		cout<<ar[i];
		cout<<' ';
		sort(ar,ar+size);
		l=0,r=size-1;
		while(l<r)
		{
			while(l<size && ar[l]==0) l++;
			while(r>=0 && ar[r]==9) r--;
			if(l>=r) break;
			ar[l]--;
			ar[r]++;
		}
		for(i=size-1;i>=0;i--)
		cout<<ar[i];
	}
	else
	cout<<"-1 -1";
	}
}