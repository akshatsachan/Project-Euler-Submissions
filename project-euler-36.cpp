 
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
	ll ans=0;
	for(ll j=1;j<=1000000;j+=1)
	{
		ll i=j;
		string baseten = to_string(i);
		int flag=1;
		string revved = baseten;
		reverse(baseten.begin(),baseten.end());
		if(baseten==revved)
		{
			if(i%2==0)
			flag=0;
			else
			{
				ll maxnum=1;
				string base2="";
				while(maxnum*2<=i)
				{
					maxnum*=2;
				}
				while(maxnum>=1)
				{
					if(i>=maxnum)
					{i-=maxnum;base2 = base2 +"1";}
					else
					base2 = base2+ "0";
					maxnum/=2;
				}
				string other = base2;
				reverse(base2.begin(),base2.end());
				if(other==base2)
				flag=1;
				else
				flag=0;
			}
		}
		else
		{
			flag=0;
		}
		if(flag==1)
		ans+=j;
	}
	
	cout<<ans<<endl;
}
