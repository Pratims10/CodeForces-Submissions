#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll c,x,i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>c>>m>>x;
		cout<<min(m,min(c,(c+m+x)/3))<<endl;
	}
}