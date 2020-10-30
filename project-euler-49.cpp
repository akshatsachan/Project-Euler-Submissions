#include "bits/stdc++.h"
//<------------PB-DS-------------->
//#include <ext/pb_ds/assoc_container.hpp> // Common file
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//<------------------------------->
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
#define pii pair<int,int>
#define pll pair<ll,ll> 
#define pls pair<ll,string>
#define psl pair<string,ll>
#define plc pair<ll,char>
#define pcl pair<char,ll>
#define pss pair<string,string>
#define all(v) v.begin(),v.end()
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define MOD (long long int)1000000007
#define PI 3.14159265359
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 

int main()
{
	int arr[10000]={0};
	arr[0]=1;arr[1]=1;
	
	rep(i,2,10000)
	{
		if(arr[i]==0)
		{
			
			int ind = i+i;
			while(ind<10000)
			{
				arr[ind]=1;
				ind+=i;
			}
		}
	}
	vci primes;
	rep(i,0,10000)
	{
		if(i>=1000&&arr[i]==0)
		{
			primes.pb(i);
		}
	}
	int count = 0;
	rep(i,0,primes.size())
	{
		rep(j,i+1,primes.size())
		{
			if(primes[j]+(primes[j]-primes[i])<=9999&&arr[primes[j]+(primes[j]-primes[i])]==0)
			{
				string s1,s2,s3;
				s1 = to_string(primes[j]);
				s2 = to_string(primes[i]);
				s3 = to_string(primes[j]+(primes[j]-primes[i]));
				sort(all(s1));
				sort(all(s2));
				sort(all(s3));
				if(s1==s2&&s1==s3)
				{
					if(count==1)
					cout<<primes[i]<<primes[j]<<primes[j]+(primes[j]-primes[i])<<endl;
					++count;
				}
			}
		}
	}
	
}
