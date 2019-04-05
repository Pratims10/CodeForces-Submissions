#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,i,j,k;
	cin>>n;
	ll ar[n],f[200002]={0};
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
		f[ar[i]]++;
	}
	ll mx=-1,ele=ar[0];
	for(i=0;i<200002;i++)
	{
		if(mx<f[i])
		{
			mx=f[i];
			ele=i;
		}
	}
	ll posn=0;
	cout<<n-mx<<endl;
	for(i=0;i<n;i++)
	{
		if(ele==ar[i])
		{
			posn=i;
			break;
		}
	}
	//cout<<ele<<' '<<posn<<endl;
	for(i=posn-1;i>=0;i--)
	{
		if(ar[i]<ele)
		{
			cout<<1<<' '<<i+1<<' '<<i+2<<endl;
		}
		else if(ar[i]>ele)
		{
			cout<<2<<' '<<i+1<<' '<<i+2<<endl;
		}
	}
	for(i=posn+1;i<n;i++)
	{
		if(ar[i]<ele)
		{
			cout<<1<<' '<<i+1<<' '<<i<<endl;
		}
		else if(ar[i]>ele)
		{
			cout<<2<<' '<<i+1<<' '<<i<<endl;
		}
	}
}