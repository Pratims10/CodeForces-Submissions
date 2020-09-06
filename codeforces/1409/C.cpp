#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,x,y;
	cin>>t;
	while(t--)
	{
		cin>>n>>x>>y;
		ll a,b,mn=INT_MAX;
		for(i=1;i<=x;i++)
		{
			for(j=1;j<=50;j++)
			{
				if((x-i)%j==0 and (y-i)%j==0)
				{
					if(mn>i+(n-1)*j and i+(n-1)*j>=y)
					{
						mn=i+(n-1)*j;
						a=i;
						b=j;
					}
				}
			}
		}
		for(i=0;i<n;i++)
		cout<<a+i*b<<' ';
		cout<<endl;
	}
}