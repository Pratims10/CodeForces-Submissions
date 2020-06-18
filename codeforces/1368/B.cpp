#include<bits/stdc++.h>
using namespace std;
#define ll long long int
list<ll> primeFactors(int n)  
{
	list<ll> v;
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
    if (n > 2)  
        v.push_back(n);
	return v;  
}
double nthRoot(ll A,ll N)
{
    long double xPre = rand() % 10;
    long double eps = 1e-3;
    long double delX = INT_MAX;
    long double xK;
    while (delX > eps) 
    {
        xK = ((N - 1.0) * xPre + 
              (long double)A/pow(xPre, N-1)) / (long double)N; 
        delX = abs(xK - xPre); 
        xPre = xK; 
    }  
    return xK; 
}
int main()
{
	ll i,j,k,m,n,t,a,b;
	cin>>n;
	string s="codeforces";
	ll x=1;
	ll ar[10],pos=0;
	for(i=0;i<10;i++) ar[i]=1;
	while(x<n)
	{
		if(pos==10) pos=0;
		x/=ar[pos];
		ar[pos]++;
		x*=ar[pos];
		pos++;
	}
	for(i=0;i<10;i++)
	{
		//cout<<ar[i]<<' ';
		for(j=0;j<ar[i];j++)
		{
			cout<<s[i];
		}
	}
}