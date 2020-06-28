#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t,a,b,c;
	cin>>t;
	while(t--)
	{
		cin>>n;
		a=0,b=0;
		while(n>1)
		{
			if(n%6==0)
			n/=6,a++;
			else if(n%3==0)
			{
				a+=2;
				n/=3;
			}
			else break;
		}
		if(n>1)
		cout<<-1<<endl;
		else cout<<a<<endl;
	}
}