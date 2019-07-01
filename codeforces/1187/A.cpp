#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll s,t,a,b,c,n,i,test,j,k;
	cin>>test;
	while(test--)
	{
		cin>>n>>s>>t;
		ll os,ot,bo;
		bo=s+t-n;
		s-=bo;
		t-=bo;
		cout<<max(s,t)+1<<endl;
	}
}