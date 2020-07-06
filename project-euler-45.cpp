 
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define pb push_back
#define mp make_pair
#define in(n) cin>>n
#define vc vector
#define vci vector<int>
#define vcl vector<long int>
#define vcll vector<long long int>
#define fs first
#define sec second
#define pq priority_queue
#define lb lower_bound
#define ub upper_bound
#define pll pair<ll,ll> 
#define pii pair<int,int> 
#define pls pair<ll,string>
#define psl pair<string,ll>
#define plc pair<ll,char>
#define pcl pair<char,ll>
#define pss pair<string,string>
#define all(v) v.begin(),v.end()
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))

int main() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	map<ll,ll>m;
	for(ll i=1;i<100001;i++)
	{
		m.insert(mp((i*(i+1))/2,1));
	}
	for(ll i=1;i<100001;i++)
	{
		if(m.find((i*(3*i-1))/2)!=m.end())
		m[(i*(3*i-1))/2]+=1;
	}
	for(ll i=1;i<100001;i++)
	{
		if(m.find((i*(2*i-1)))!=m.end())
		m[(i*(2*i-1))]+=1;
	}
	for(auto itr:m)
	{
		if(itr.second==3)
		{cout<<itr.first<<endl;}
	}
}
