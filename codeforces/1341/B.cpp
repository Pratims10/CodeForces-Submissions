#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define ld long double
int main()
{
	ll a,b,c,d,i,j,k,n,m,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		ll ar[n],b[n];
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
			b[i]=0;
		}
		for(i=1;i<n-1;i++)
		{
			if(ar[i]>ar[i-1] and ar[i]>ar[i+1])
			b[i]=1;
		}
		ll pos=0,s=0;
		for(i=1;i<k-1;i++)
		{
			s+=b[i];
		}
		ll mx=s;
		for(i=k;i<n;i++)
		{
			s+=b[i-1];
			s-=b[i-k+1];
			if(mx<s)
			{
				mx=s;
				pos=i-k+1;
			}
		}
		cout<<mx+1<<' '<<pos+1<<endl;
	}
}