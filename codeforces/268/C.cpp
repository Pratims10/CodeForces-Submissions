#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,z,o;
	cin>>n>>m;
	ll x=min(m,n);
	cout<<x+1<<endl;
	for(i=0;i<=x;i++)
	{
		cout<<x-i<<' '<<(i)<<endl;
	}
}