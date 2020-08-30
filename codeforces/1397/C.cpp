#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>n;
	ll ar[n];
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	if(n==1)
	{
		cout<<"1 1\n"<<-1*ar[0]<<'\n';
		cout<<"1 1\n0\n";
		cout<<"1 1\n0\n";
		return 0;
	}
	ll a[n],b[n];
	for(i=0;i<n;i++)
	{
		b[i]=n-(ar[i]%n);
		a[i]=(b[i]+ar[i])/n-b[i];
	}
	cout<<1<<' '<<n<<endl;
	for(i=0;i<n;i++)
	{
		cout<<-1*a[i]*n<<' ';
		ar[i]-=a[i]*n;
	}
	cout<<endl;
	
	cout<<1<<' '<<n-1<<endl;
	for(i=0;i<n-1;i++)
	{
		cout<<-1*b[i]*(n-1)<<' ';
		ar[i]-=b[i]*(n-1);
	}
	cout<<endl;
	
	cout<<2<<' '<<n<<endl;
	for(i=0;i<n-2;i++)
	cout<<"0 ";
	cout<<-1*b[n-1]*(n-1)<<' ';
	ar[n-1]-=b[n-1]*(n-1);
	cout<<endl;
}