#include<iostream>
#include<vector>
using namespace std;
#define lli long long int
#define mod 1000000007
lli maximize(vector<lli> v,bool taken[],lli n,lli a)
{
	if(n==0 || a==0)
		return 0;
	
}
int main()
{
	lli i,h,s,a,p,r,lp=mod,dr=0,max_r=0,min_p = 0,index;
	cin>>h>>s>>a;
	bool taken[h+s]={false};
	vector<lli> v;
	for(i=0;i<h;i++)
	{
		cin>>r>>p;
		v.push_back(make_pair(p,r));
		if(p<lp)
		{
			lp = p;
			dr = r;
		}
	}
	min_p = lp;
	max_r = dr;
	lp = mod;
	for(i=0;i<s;i++)
	{
		cin>>r>>p;
		v.push_back(make_pair(p,r));
		if(p<lp)
		{
			lp = p;
			dr = r;
		}
	}
	min_p += lp;
	max_r += dr;
	if(min_p < a)
	{
		cout<<"-1";
	}
	else
	{
		cout<<maximize(v,taken,h+s,a);
	}
	return 0;
}
