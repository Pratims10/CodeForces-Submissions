#include<bits/stdc++.h>
using namespace std;
#define ll long long int
pair<ll,ll> func(ll ar[],ll l,ll n)
{
	ll mn=ar[l],minpos=l;
	for(ll i=l;i<n;i++)
	{
		if(mn>ar[i])
		{
			mn=ar[i];
			minpos=i;
		}
	}
	return {mn,minpos};
}
int main()
{
	ll i,j,k,m,n,t,a,b,s;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		string s;
		cin>>s;
		ll ctr=0,l=0,lpos;
		for(i=0;i<n;i++)
		{
			if(s[i]=='0')
			{
				if(ctr+i-l<=k)
				{
					ctr+=i-l;
					lpos=i;
	//				cout<<ctr<<endl;
					l++;
				}
			}
		}
		string str;
		for(i=0;i<l;i++)
		str+='0';
		k-=ctr;
		ctr=0;
		for(i=0;i<n;i++)
		{
			if(ctr<l&&s[i]=='0')
			ctr++;
			else str+=s[i];
		}
	//	cout<<str<<endl<<k<<endl;
		
		ctr=0;
		ll pos=-1;
		for(i=0;i<n;i++)
		{
			if(str[i]=='0')
			ctr++;
			if(ctr==l+1)
			{
				pos=i;
				break;
			}
		}
	//	cout<<pos<<endl;
		if(pos!=-1)
		while(pos>0&&k>0)
		{
			swap(str[pos],str[pos-1]);
			pos--;
			k--;
		}
		cout<<str<<endl;
	}
}