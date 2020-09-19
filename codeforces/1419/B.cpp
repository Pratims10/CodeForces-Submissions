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
		ll ctr=0,x=1;
		while(n>0)
		{
			ll req=x*(x+1);
			req/=2;
			if(n>=req)
			{
				n-=req;
				x=x*2+1;
				ctr++;
			}
			else
			break;
		}
		cout<<ctr<<endl;
	}
}