#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> printDivisors(ll n) 
{ 
    // Vector to store half of the divisors 
    vector<ll> v; 
    for (ll i=1; i<=sqrt(n); i++) 
    { 
        if (n%i==0) 
        { 
            if (n/i == i)
            v.push_back(i);
            else
            {
				v.push_back(i);
                v.push_back(n/i);
            } 
        } 
    }
//    for (int i=v.size()-1; i>=0; i--) 
  //      printf("%d ", v[i]); 
  return v;
}
int main()
{
	ll i,j,k,a1,a2,k1,k2,n;
	cin>>n;
	ll ar[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		cin>>ar[i][j];
	}
	ll ans=ar[0][1];
	for(i=1;i<n;i++)
	{
		ans=__gcd(ans,ar[0][i]);
	}
	ll answ[n];
	answ[0]=ans;
	for(i=1;i<n;i++)
	answ[i]=ar[i][0]/ans;
	ll a=ans;
	vector<ll> v=printDivisors(ans);
	for(i=0;i<v.size();i++)
	{
		a=ans;
		answ[0]/=v[i];
		for(j=1;j<n;j++)
		answ[j]*=v[i];
		bool flag=true;
		for(j=0;j<n;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if(k==j)
				continue;
				if(answ[j]*answ[k]!=ar[j][k])
				{
					flag=false;
					break;
				}
			}
			if(flag==false)
			break;
		}
		if(flag)
		{
			for(i=0;i<n;i++)
			cout<<answ[i]<<' ';
			break;
		}
		//end
		answ[0]*=v[i];
		for(j=1;j<n;j++)
		answ[j]/=v[i];
	}
}