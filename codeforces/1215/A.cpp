#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll a1,a2,k1,k2,n;
	cin>>a1>>a2>>k1>>k2>>n;
	ll mn,mx;
	ll x=(k1-1)*a1+(k2-1)*a2;
	if(n<x)
	mn=0;
	else
	mn=min(a1+a2,n-x);
	if(k1<k2)
	{
		mx=min(a1,n/k1);
		n-=k1*mx;
		mx+=min(a2,n/k2);
	}
	else
	{
		mx=min(a2,n/k2);
		n-=k2*mx;
		mx+=min(a1,n/k1);
	}
	cout<<mn<<' '<<mx<<endl;
}