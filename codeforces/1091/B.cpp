#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,i,j,k,p=0,q=0,fx[6001]={0},fy[6001]={0};
	cin>>n;
	int a[n],b[n],x[n],y[n];
	for(i=0;i<n;i++)
	cin>>x[i]>>y[i];
	for(i=0;i<n;i++)
	cin>>a[i]>>b[i];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			p+=x[i]+a[j];
			q+=y[i]+b[j];
		}
	}
	cout<<p/(n*n)<<' '<<q/(n*n)<<endl;
}