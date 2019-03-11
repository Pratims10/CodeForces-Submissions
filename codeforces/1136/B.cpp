#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,i,j,k,ans;
	cin>>n>>k;
	if(k==1)
	ans=4+(n-2)*3+2;
	else if(n!=k)
	ans=min(4+(k-2)*3+2+k+(n-k-1)*3+2,3+(n-k)*4+3*(k-1));
	else
	ans=3+(n-1)*3;
	cout<<ans<<endl;
}