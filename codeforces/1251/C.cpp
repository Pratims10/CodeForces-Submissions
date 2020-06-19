#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void merge(ll arr[], ll l, ll m, ll r) 
{ 
    ll i, j, k; 
    ll n1 = m - l + 1; 
    ll n2 =  r - m; 
    ll L[n1], R[n2]; 
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
    i = 0;
    j = 0;
    k = l;
    while(i < n1 && j < n2) 
    {
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        }
        k++;
    }
    while (i < n1)
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    }
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    }
}
int main()
{
	ll i,j,k,m,n,t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		n=s.length();
		ll s1=0;
		ll s2=0;
		vector<ll> o,e;
		for(i=0;i<n;i++)
		{
			if((s[i]-48)%2==0)
			e.push_back(s[i]-48);
			else o.push_back(s[i]-48);
		}
		s2=e.size();
		s1=o.size();
		ll ar[n],size=0;
		for(i=0;i<s1;i++)
		ar[size++]=o[i];
		for(i=0;i<s2;i++)
		ar[size++]=e[i];
		merge(ar,0,s1-1,n-1);
		for(i=0;i<n;i++)
		cout<<ar[i];
		cout<<endl;
	}
}