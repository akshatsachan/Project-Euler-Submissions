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
#define MOD 1000000007
/*
 * This program is going to take a lot of time in execution.
 * As this is a simple brute force
 */
int main() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	set<int>s;
	rep(i,1,10000)
	{
		s.insert((i*(3*i-1))/2);
		
	}
	
	int ans=1000000000;
	for(auto itr:s)
	{
		for(auto other:s)
		{
			if(s.find((int)abs(itr-other))!=s.end()&&ans>(int)abs(itr-other))
			{
				if(s.find(itr+other)!=s.end())
				{
					ans=(int)abs(itr-other);
				}
			}
			
		}
	}
	cout<<ans<<endl;
}
