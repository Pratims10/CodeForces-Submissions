#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,a,b;
	cin>>a>>b;
	ll x=a,y=b;
	ll d=0;
	m=0;
	ll prev=0;
	while(x!=y)
	{
		if(x<y)
		{
			d+=x-prev;
			prev=x;
			x+=a;
		}
		else
		{
			m+=y-prev;
			prev=y;
			y+=b;
		}
	}
	if(a>b)
	d+=x-prev;
	else m+=x-prev;
	if(d>m)
	cout<<"Dasha";
	else if(m>d)
	cout<<"Masha";
	else
	cout<<"Equal";
}