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
	ll i,j,k,a1,a2,k1,k2;
	string s;
	cin>>s;
	ll n=s.length();
	ll ar[n];
	ar[0]=1;
	char ch=s[0];
	for(i=1;i<n;i++)
	{
		if(s[i]<=ch)
		{
			ch=s[i];
			ar[i]=1;
		}
		else
		ar[i]=0;
	}
	for(i=0;i<n;i++)
	if(ar[i]==0&&s[i]!=ch)
	cout<<"Ann\n";
	else cout<<"Mike\n";
}