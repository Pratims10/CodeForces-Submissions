#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,s,t;
	cin>>n;
	long double x=0.0;
	for(i=1;i<=n;i++)
	{
		x+=1.0/(i*1.0);
	}
	cout<<x<<endl;
}