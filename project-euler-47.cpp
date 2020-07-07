 
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
	cin.tie(0);cout.tie(0);
	int count=0;
	int ans=0;
	for(int i=2;i<=1000000;i++)
	{
		int num=i;
		set<int>s;
		for(int j=2;j*j<=i;j++)
		{
			if(num%j==0)
			{
				s.insert(j);
				while(num%j==0)
				{
					num/=j;
				}
			}
		}
		if(num!=1)
		s.insert(num);
		if(s.size()==4)
		{++count;//cout<<i<<endl;
			}
		else
		count=0;
		if(count==4)
		{ans=i-3;break;}
	}
	cout<<ans<<endl;
}
