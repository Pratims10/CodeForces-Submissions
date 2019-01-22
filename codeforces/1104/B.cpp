#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,i,j,k,ctr=0;
	stack<char> s;
	string str;
	cin>>str;
	ll l=str.length();
	for(i=0;i<l;i++)
	{
		if(s.empty())
		s.push(str[i]);
		else
		{
			if(s.top()==str[i])
			{
				s.pop();
				ctr++;
			}
			else
			s.push(str[i]);
		}
	}
	//cout<<ctr<<endl;
	if(ctr%2==0)
	{
		cout<<"No\n";
	}
	else
	cout<<"Yes\n";
}