#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll N=n;
		for(i=n;;i++)
		{
			N=i;
			bool flag=true;
			while(N!=0)
			{
				if(N%3==2)
				flag=false;
				N/=3;
			}
			if(flag)
			{
				cout<<i<<endl;
				break;
			}
		}
	}
}