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
	ifstream in;
	in.open("p067_triangle.txt");
	vector<vector<int>>a
	rep(i,0,100)
	{
		vci other;
		int temp;
		rep(j,0,i+1)
		{
			in>>temp;
			other.pb(temp);
		}
		a.pb(other);
	}
	for(int i = 98;i>=0;i--)
	{
		rep(j,0,i+1)
		{
			a[i][j]+=max(a[i+1][j],a[i+1][j+1]);
		}
	}
	cout<<a[0][0]<<endl;
	in.close();
}
