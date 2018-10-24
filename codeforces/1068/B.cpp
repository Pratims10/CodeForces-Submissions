#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll printDivisors(ll n) 
{
	ll ctr=0;
    for (ll i=1; i<=sqrt(n); i++) 
    {
        if (n%i == 0) 
        {
            if (n/i == i) 
               ctr++;// printf("%d ", i); 
            else
                ctr+=2; 
        } 
    } 
    return ctr;
}  
int main()
{
	ll t,i,j,ctr,n;
	cin>>n;
	if(n==1)
	cout<<1<<endl;
	else
	cout<<printDivisors(n)<<endl;
}