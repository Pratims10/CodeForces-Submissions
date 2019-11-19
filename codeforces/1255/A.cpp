#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t,i,j,k,m,n,a,b;
	cin>>t;
	while(t--)
	{
		ll ctr=0;
		cin>>a>>b;
		ll d=abs(a-b);
		if(b<a)
		swap(a,b);
		if(a<b)
		{
			ctr+=d/5;
			d%=5;
			ctr+=d/2;
			d%=2;
			ctr+=d;
		}
		cout<<ctr<<endl;
	}
}