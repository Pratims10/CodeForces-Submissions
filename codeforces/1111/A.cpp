#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int vowel(char ch)
{
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	return 1;
	else
	return 0;
}
int main()
{
	ll i,j,k;
	string s1,s2;
	cin>>s1>>s2;
	ll a=s1.length();
	ll b=s2.length();
	bool flag=true;
	if(a!=b)
	flag=false;
	for(i=0;i<a;i++)
	{
		if(vowel(s1[i])==1&&vowel(s2[i])==0)
		flag=false;
		else if(vowel(s2[i])==1&&vowel(s1[i])==0)
		flag=false;
	}
	if(flag)
	cout<<"Yes\n";
	else
	cout<<"No\n";
}