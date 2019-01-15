#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll sum(ll a)
{
	ll s=0;
	while(a!=0)
	{
		s+=a%10;
		a/=10;
	}
	return s;
}
int main()
{
	ll n,K,k,i,j;
	cin>>K;
	k=1;
	for(i=1;k<=K;i++)
	{
		if(sum(i)==10)
		k++;
	}
	cout<<i-1<<endl;
}