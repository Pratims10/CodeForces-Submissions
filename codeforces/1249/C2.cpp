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
		ll N=n;
		ll ar[100000],size=0;
		bool flag=true;
		ll ctr=0;
		ll pos=-1;
		while(n!=0)
		{
			if(n%3==2)
			ctr++;
			ar[size++]=n%3;
			if(ar[size-1]==0&&ctr)
			{
				ar[size-1]=1;
				ctr=0;
				pos=size-1;
			}
			n/=3;
		}
		if(ctr>0)
		{
			ll ans=pow(3,size);
			cout<<ans<<endl;
		}
		else
		{
			for(i=0;i<size;i++)
			if(ar[i]==2)
			ar[i]=0;
			ll ans=0;
			ctr=1;
			for(i=0;i<pos;i++)
			ar[i]=0;
			for(i=0;i<size;i++)
			{
				ans+=ar[i]*ctr;
				ctr*=3;
			}
			cout<<ans<<endl;
		}
	}
}