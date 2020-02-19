#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n;
	cin>>n;
	ll m,i,d,j,k;
	ll a[n],b[n];
	for(i=0;i<n;i++) cin>>a[i];
	for(i=0;i<n;i++) cin>>b[i];
	ll sum,x,ans=99000000001;
	for(j=1;j<n-1;j++)
	{
		bool fl=false;
		sum=b[j];
		x=1000000001;
		for(i=0;i<j;i++)
		{
			if(a[i]<a[j])
			{
				fl=true;
				x=min(b[i],x);
			}
		}
		if(fl)
		sum+=x;
		bool f2=false;
		x=1000000001;
		for(k=j+1;k<n;k++)
		{
			if(a[k]>a[j])
			{
				f2=true;
				x=min(b[k],x);
			}
		}
		if(f2)
		sum+=x;
		if(fl&&f2)
		ans=min(sum,ans);
	}
	if(ans==99000000001)
	ans=-1;
	cout<<ans;
}