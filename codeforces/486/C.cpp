#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,p;
	cin>>n>>p;
	string s;
	cin>>s;
	ll ar[n];
	for(i=0;i<n;i++)
	{
		int a=s[i]-97;
		int b=s[n-1-i]-97;
		a=abs(a-b);
		ar[i]=min(a,abs(26-a));
	}
	ll ans=0;
	if(n%2==1 and p==n/2+1)
	{
		p--;
		ll pos=p;
		for(i=p;i>=0;i--)
		{
			ans+=ar[i];
			if(ar[i]>0) pos=i;
		}
		ans+=p-pos;
		cout<<ans;
	}
	else
	{
		p--;
		ll arr[n];
		for(i=0;i<n;i++) arr[i]=ar[i];
		if(p>=n/2) p=n-1-p;
		ll pos=p,x=0,fl=0;
		for(i=p;i>=0;i--)
		{
			if(ar[i]>0){
				pos=i;
				x+=ar[i];
				ar[i]=0;
				fl=1;
			}
		}
		if(fl)
		{
			x+=p-pos;
		}
		
		fl=0;
		ll aa=pos;
		for(i=pos;i<n/2;i++)
		{
			if(ar[i]>0){
				pos=i;
				x+=ar[i];
				ar[i]=0;
				fl=1;
			}
		}
		if(fl)
		{
			x+=pos-aa;
		}
		
		ans=x;
		//cout<<ans<<' ';
		pos=p,x=0,fl=0;
		for(i=p;i<n/2;i++)
		{
			if(arr[i]>0){
				pos=i;
				x+=arr[i];
				arr[i]=0;
				fl=1;
			}
		}
		if(fl)
		x+=pos-p;
	
		fl=0;
		aa=pos;
		for(i=pos;i>=0;i--)
		{
			if(arr[i]>0){
				pos=i;
				x+=arr[i];
				fl=1;
			}
		}
		if(fl)
		x+=aa-pos;
		cout<<min(ans,x);
	}
}