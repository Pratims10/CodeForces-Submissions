#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll a,b,i,j,k,n,ans=9999999999999999;
	cin>>n>>k;
	for(i=sqrt(n);i>=1;i--)
	{
		if(n%i==0)
		{
			a=i;
			b=n/i;
		}
		j=k*a+b;
		if(((j/k)*(j%k))==n)
		ans=min(ans,k*a+b);
		j=k*b+a;
		if(((j/k)*(j%k))==n)
		ans=min(ans,k*b+a);
	}
	cout<<ans<<endl;
}