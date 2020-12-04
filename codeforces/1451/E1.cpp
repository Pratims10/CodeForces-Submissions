#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,d;
	cin>>n;
	ll x,y,z,a,b;
	
	ll a1,b1;
	cout<<"XOR 1 2\n";
	fflush(stdout);
	cin>>a;
	a1=a;
	cout<<"AND 1 2\n";
	fflush(stdout);
	cin>>b;
	x=a+2*b;//a[1]+a[2]
	
	cout<<"XOR 1 3\n";
	fflush(stdout);
	cin>>a;
	b1=a;
	cout<<"AND 1 3\n";
	fflush(stdout);
	cin>>b;
	y=a+2*b;//a[1]+a[3]
	
	a=a1^b1;
	cout<<"AND 2 3\n";
	fflush(stdout);
	cin>>b;
	z=a+2*b;//a[2]+a[3]
	
	ll ar[n];
	ar[0]=(x+y-z)/2;
	ar[1]=x-ar[0];
	ar[2]=y-ar[0];
	for(i=3;i<n;i++)
	{
		cout<<"XOR "<<1<<' '<<i+1<<'\n';
		fflush(stdout);
		cin>>a;
		ar[i]=a^ar[0];
	}
	cout<<"! ";
	for(i=0;i<n;i++)
	cout<<ar[i]<<' ';
}