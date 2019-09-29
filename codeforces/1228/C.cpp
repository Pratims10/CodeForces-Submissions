#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll m=1000000007;
long long int power(long long int x,long long int n)
{
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
set<ll,greater<ll> > primeFactors(ll n)
{ 
	set<ll,greater<ll> > st;
    while (n % 2 == 0)  
    {  
        st.insert(2);  
        n = n/2;  
    }
    for (ll i = 3; i <= sqrt(n); i = i + 2)  
    {
        while (n % i == 0)  
        {  
//          cout << i << " ";
			st.insert(i);
            n = n/i;  
        }  
    }
    if (n > 2)
        st.insert(n);
        return st;
}
int main()
{
	ll i,j,k,n,x,l,r;
	cin>>x>>n;
    ll ans=1;
    set<ll,greater<ll> > st=primeFactors(x);
    set <ll, greater <ll> > :: iterator it;
    for(it=st.begin();it!=st.end();it++)
    {
    	ll f=*it;
    	ll ctr=0,N=n;
    	while(N>0)
    	{
    		N/=f;
    		ctr+=N;
		}
		r=power(f,ctr);
    	ans=(ans%m*r%m)%m;
	}
	cout<<ans;
	
}