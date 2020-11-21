#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,d;
	cin>>t;
	while(t--)
	{
		cin>>d>>k;
		ll c1=-1;
		for(i=0;i<=d;i+=k)
		{
			ll p=d*d-i*i;
			p=sqrt(p);
			p=(p/k)*k;
			ll ctr=i/k+p/k;
			c1=max(c1,ctr);
		}
		if(c1%2==0)
		cout<<"Utkarsh";
		else cout<<"Ashish";
		cout<<endl;
	}
}