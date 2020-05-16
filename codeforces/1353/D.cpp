#include<bits/stdc++.h>
using namespace std;
#define ll long long int
typedef struct pr{
	ll n;
	ll l;
};
struct CompareHeight {
    bool operator()(pr const& p1,pr const& p2)
    {
        if(p1.n==p2.n)
        return p1.l>p2.l;
        return p1.n<p2.n;
    }
};
int main()
{
	ll i,j,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ll ans[n],ctr=1;
		priority_queue<pr, vector<pr>, CompareHeight> pq; 
		pq.push({n,0});
		for(i=1;i<=n;i++)
		{
			pr x=pq.top();
			pq.pop();
			ll l=x.l,r=l+x.n-1;
			ll pos=(l+r)/2;
			ans[pos]=ctr++;
			if(pos-1>=l) pq.push({pos-l,l});
			if(pos+1<=r) pq.push({r-pos,pos+1});
		}
		for(i=0;i<n;i++)
		cout<<ans[i]<<' ';
		cout<<endl;
	}
}