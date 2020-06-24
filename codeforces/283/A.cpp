#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,x,t;
	cin>>n;
	ll pos=1;
	ll ans=0;
	ll ar[200005]={0};
	cout<<fixed<<setprecision(6);
	for(i=0;i<n;i++)
	{
		cin>>t;
		if(t==1)
		{
			ll a;
			cin>>a>>x;
			ar[0]+=x;
			ar[a]-=x;
			ans+=a*x;
		}
		else if(t==2)
		{
			cin>>k;
			ans+=k;
			ar[pos++]+=k;
			ar[pos]-=k;
		}
		else
		{
			ans+=ar[pos];
			ar[pos-1]+=ar[pos];
			ar[pos--]=0;
		}
		long double q=ans*1.0;
		q/=(pos*1.0);
		cout<<q<<endl;
	}
}