#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,n,j,k;
	bool flag=false;
	cin>>n;
	ll ar[n];
	for(i=0;i<n;i++)
	cin>>ar[i];
	for(i=0;i<pow(2,n);i++)
	{
		ll s=0;
		bitset<15> bset(i);
		for(j=0;j<15;j++)
		{
			if(j<n)
			if(bset.test(j)==1)
			s-=ar[j];
			else
			s+=ar[j];
		}
		if(s%360==0)
		{
			flag=true;
			break;
		}
	}
	if(flag)
	cout<<"YES\n";
	else cout<<"NO\n";
}