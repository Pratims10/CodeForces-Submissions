#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		string s;
		cin>>s;
		ll l=0,r=n-1;
		while(l<n and s[l]=='0')
		{
			l++;
		}
		if(l==n){
			ll ans=ceil((l*1.0)/(k+1.0));
			cout<<ans<<endl;
			continue;
		}
		ll ans=l/(k+1),ctr=0;
		while(r>=0 and s[r]=='0'){
			r--;
			ctr++;
		}
		ans+=ctr/(k+1);
		for(i=l;i<=r;i++)
		{
			ll z=0;
			while(i<=r and s[i]=='0')
			{
				i++;
				z++;
			}
			ans+=(z-k)/(k+1);
		}
		cout<<ans<<endl;
	}
}
/*6
6 1
100010
6 2
000000
5 1
10101
3 1
001
2 2
00
1 1
0
*/