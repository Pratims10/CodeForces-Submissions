#include<bits/stdc++.h>
using namespace std;
#define ll long long int
long long int power(long long int x,long long int n)
{
	long long int m=(long long int)pow(10,9)+7;
	if(n==0)
	return 1;
  	long long int res=1;
    while(n>0)
    {
 	    if(n&1)
            res=((res%m)*(x%m))%m;
        x=((x%m)*(x%m))%m;
        n=n>>1;
    }
    return res;
}
int main()
{
	ll n,m,ans,M=1000000007;
	cin>>n>>m;
	ans=power(2,m)-(ll)1;
	if(ans<0)
	ans+=M;
	else ans%=M;
//	cout<<ans<<endl;
	cout<<power(ans,n)%M;
}