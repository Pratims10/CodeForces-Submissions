#include<bits/stdc++.h>
using namespace std;
#define ll int
vector<ll> primeFactors(int n)
{
	vector<ll> v;
    while (n % 2 == 0)
    {
        v.push_back(2);
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {  
            v.push_back(i);
            n = n/i;
        }  
    }
    if(n>2) v.push_back(n);
    return v;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll i,j,k,m,n,t;
	cin>>n;
	ll ar[n];
	ll f[10000001]={0};
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
		f[ar[i]]++;
	}
	bool prime[10000001];
	memset(prime,true,sizeof(prime));
	for(i=2;i<=1e7;i++)
	{
		if(prime[i])
		{
			for(j=2*i;j<=1e7;j+=i) prime[j]=false;
		}
	}
	ll ctr[10000001]={0};
	for(i=2;i<=1e7;i++)
	{
		if(prime[i])
		{
			for(j=i;j<=1e7;j+=i) ctr[i]+=f[j];
		}
	}
	for(i=1;i<=10000000;i++) ctr[i]+=ctr[i-1];
	cin>>m;
	while(m--)
	{
		cin>>i>>j;
		if(j>1e7) j=1e7;
		if(i>1e7) i=1e7;
		cout<<ctr[j]-ctr[i-1]<<endl;
	}
}