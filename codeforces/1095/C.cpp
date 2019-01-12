#include<bits/stdc++.h>
using namespace std;
#define ll long long int
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
	ll i,j,k,l,n;
	cin>>n>>k;
	ll ans[35]={0};
	ll size=0,ctr;
	if(k>n)
	cout<<"NO\n";
	else
	{
		bitset<35> bset(n);
		for(i=0;i<35;i++)
		if(bset[i]==1)
		ans[i]=1;
		else ans[i]=0;
		ctr=bset.count();
		//cout<<"F";
	//	for(i=31;i>=0;i--)
	//	cout<<ans[i]<<' ';
	//	cout<<endl;
		while(ctr<k)
		{
			for(i=34;i>=1;i--)
			if(ans[i])
			{
				ans[i]--;
				ans[i-1]+=2;
				ctr++;
				break;
			}
		}
		ll ans2[35],p=0;
		for(i=34;i>=0;i--)
		ans2[i]=ans[i];
		//for(i=0;i<35;i++)
		//cout<<ans[i]<<' ';
		//cout<<endl;
		for(i=0;i<35;i++)
		{
			p+=ans[i];
		}
		//cout<<p<<' ';
		if(p==k)
		{
			cout<<"YES\n";
			for(i=0;i<35;i++)
			{
				while(ans2[i]!=0)
				{
					cout<<power(2,i)<<' ';
					ans2[i]--;
				}
			}
		}
		else
		cout<<"NO\n";
	}
}