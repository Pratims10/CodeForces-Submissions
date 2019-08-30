#include<bits/stdc++.h>
using namespace std;
#define ll int
void cot(ll A[], ll len) 
{ 
    multiset<ll,greater <ll>> s; 
    ll countSmaller[len]; 
    for (ll i = len - 1; i >= 0; i--) { 
        s.insert(A[i]); 
        auto it = s.lower_bound(A[i]); 
        countSmaller[i] = distance(s.begin(), it); 
    } 
    ll ctr=0;
    for (ll i = 0; i < len; i++) 
    {
    	cout<<countSmaller[i]<<' ';
	    if(countSmaller[i])
        ctr++;
    }
        cout<<ctr<<endl;
} 
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
	cin>>n;
	ll ar[n];
	for(i=0;i<n;i++)
	cin>>ar[i];
	ll ctr=0;
	ll mn=ar[n-1];
	for(i=n-2;i>=0;i--)
	{
		if(mn>ar[i])
		{
			mn=ar[i];
		}
		else if(mn<ar[i])
		ctr++;
	}
	cout<<ctr<<endl;
	}
}