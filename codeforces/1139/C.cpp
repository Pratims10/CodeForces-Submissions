#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll root(ll ar[],ll i)
{
	while(i!=ar[i])
	i=ar[i];
	return i;
}
void join(ll ar[],ll size[],ll i,ll j)
{
	ll ri=root(ar,i);
	ll rj=root(ar,j);
	if(size[ri]<size[rj])
	{
		ar[ri]=rj;
		size[rj]+=size[ri];
	}
	else
	{
		ar[rj]=ri;
		size[ri]+=size[rj];
	}
}
ll m=1000000007;
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
	ll i,j,k,x,n,t,ans,K;
	cin>>n>>K;
	ll ar[n],size[n];
	for(i=0;i<n;i++)
	{
		ar[i]=i;
		size[i]=1;
	}
	for(i=0;i<n-1;i++)
	{
		cin>>j>>k>>x;
		if(x==0)
		join(ar,size,j-1,k-1);
	}
	ans=power(n,K);
	for(i=0;i<n;i++)
	{
		ar[i]=root(ar,ar[i]);
	}
	unordered_map<ll,ll> mp;
	for(i=0;i<n;i++)
	mp[ar[i]]++;
	for(i=0;i<n;i++)
	{
		if(mp[ar[i]]!=-1)
		{
			ans-=power(mp[ar[i]],K);
			if(ans<0)
			ans+=m;
			else
			ans%=m;
			mp[ar[i]]=-1;
		}
	}
	cout<<ans<<endl;
}