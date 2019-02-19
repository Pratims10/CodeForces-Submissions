#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll s=0,q,a,n,i,j,k;
	cin>>n;
	ll ob[n],oa[n],eb[n],ea[n];
	ll e=0,o=0;
	ll ar[n];
	ob[0]=0;
	eb[0]=0;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
			ob[i]=o;
			o+=ar[i];
			if(i==0)
			eb[i]==0;
			else
			eb[i]=e;
		}
		else
		{
			//e+=ar[i];
			eb[i]=e;
			e+=ar[i];
			ob[i]=o;
		}
	}
	ll b[n];
	for(i=0;i<n;i++)
	{
		b[i]=ar[n-1-i];
	}
	for(i=0;i<n;i++)
	{
		ar[i]=b[i];
	//	cout<<ar[i]<<' ';
	}
	e=0,o=0;
	ea[0]=0;
	oa[0]=0;
	for(i=0;i<n;i++)
	{
		if(n%2==0)
		{
		if(i%2==1)
		{
			oa[i]=o;
			o+=ar[i];
			if(i==0)
			ea[i]==0;
			else
			ea[i]=e;
		}
		else
		{
			//e+=ar[i];
			ea[i]=e;
			e+=ar[i];
			oa[i]=o;
		}
		}
		else
		{
			if(i%2==0)
		{
			oa[i]=o;
			o+=ar[i];
			if(i==0)
			ea[i]==0;
			else
			ea[i]=e;
		}
		else
		{
			//e+=ar[i];
			ea[i]=e;
			e+=ar[i];
			oa[i]=o;
		}
		}
	}
	//reversing odd even arrays
	for(i=0;i<n;i++)
	b[i]=ea[n-1-i];
	for(i=0;i<n;i++)
	ea[i]=b[i];
	
	for(i=0;i<n;i++)
	b[i]=oa[n-1-i];
	for(i=0;i<n;i++)
	oa[i]=b[i];
	//done
	//for(i=0;i<n;i++)
	//cout<<ob[i]<<' ';
	//cout<<endl;
//	for(i=0;i<n;i++)
//	cout<<eb[i]<<' ';
//	cout<<endl;
//	for(i=0;i<n;i++)
//	{
//		cout<<oa[i]<<' ';
//	}
//	cout<<endl;
//	for(i=0;i<n;i++)
//	{
//		cout<<ea[i]<<' ';
//	}
//	cout<<endl;
	ll ans=0;
	for(i=0;i<n;i++)
	{
		if((ob[i]+ea[i])==(oa[i]+eb[i]))
		ans++;
		else if((eb[i]+oa[i])==(ob[i]+ea[i]))
		ans++;
	}
	cout<<ans<<endl;
}