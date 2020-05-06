#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> arr;
ll binarySearch(ll l, ll r, ll x)
{
    if (r >= l) { 
        ll mid = l + (r - l) / 2; 
        if (arr[mid] == x) 
            return mid; 
        if (arr[mid] > x) 
            return binarySearch(l, mid - 1, x); 
        return binarySearch(mid + 1, r, x); 
    }
    return -1; 
} 
  

int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	ll c1=2,c2=0;
	for(i=1;i<=100000;i++)
	{
		ll x=(i*(i-1))/2;
		x+=i*(i+1);
		arr.push_back(x);
		if(x>=1000000000)
		break;
	}
	while(t--)
	{
		ll ans=0;
		cin>>n;
		while(true)
		{
			if(n<=1)
			break;
			if(binarySearch(0,arr.size()-1,n)!=-1)
			{
				ans++;
				break;
			}
			ll x=upper_bound(arr.begin(),arr.end(),n)-arr.begin();
			if(x==0)
			break;
			x=arr[x-1];
			n-=x;
			ans++;
			if(n<=1) break;
		}
		cout<<ans<<endl;
	}
}