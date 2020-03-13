#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n>>k;
	ll ar[n],b[n]={0};
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	b[0]=ar[0];
	for(i=1;i<n;i++)
	b[i]=ar[i]+b[i-1];
	ll a,b2=n-k,b1;
	ll prev;
	ll mx=b[n-1]-b[n-1-k];
	prev=mx;
	ll ans=0;
	for(i=n-k-1;i>=k-1;i--)
	{
		ll x;
		if(i-k>=0)
		x=b[i]-b[max((ll)0,i-k)];
		else
		x=b[i];
//		cout<<x<<'b';
		if(i!=n-k-1)
		{
			if(prev-ar[i+k+1]+ar[i+1]>=mx)
			{
				mx=prev-ar[i+k+1]+ar[i+1];
//				cout<<' '<<i+k+1<<' '<<i+1<<"   ";
				b2=i+1;
			}
			prev=prev-ar[i+k+1]+ar[i+1];
//			cout<<mx<<' ';
		}
//		else cout<<mx;
		if(mx+x>=ans)
		{
//			cout<<" SD";
			ans=mx+x;
			a=i-k+1;
			b1=b2;
//			cout<<" "<<a<<' '<<b1<<endl;
		}
//		cout<<endl;
	}
	cout<<a+1<<' '<<b1+1;
}