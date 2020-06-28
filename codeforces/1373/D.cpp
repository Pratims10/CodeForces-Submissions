#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll maxSubArraySum(vector<ll> &a) 
{ 
    ll max_so_far = 0, max_ending_here = 0; 
  
    for (ll i = 0; i < a.size(); i++) 
    { 
        max_ending_here = max_ending_here + a[i]; 
        if (max_so_far < max_ending_here) 
            max_so_far = max_ending_here; 
        if (max_ending_here < 0) max_ending_here = 0; 
    }
    return max_so_far;
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll ar[n];
		ll s=0;
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
			if(i%2==0) s+=ar[i];
		}
		vector<ll> v;
		for(i=0;i<n-1;i+=2)
		v.push_back(ar[i+1]-ar[i]);
		ll ans=maxSubArraySum(v);
		ans+=s;
		v.clear();
		for(i=1;i<n-1;i+=2)
		v.push_back(ar[i]-ar[i+1]);
		ans=max(ans,s+maxSubArraySum(v));
		cout<<ans<<endl;
	}
}