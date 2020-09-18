#include <bits/stdc++.h>
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
#define MOD 1000000007
#define PI 3.14159265359
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 

int main()
{
	int ans = 0;
	rep(j,1,10001)
	{
		vci a;
		int num = j;
		while(num)
		{
			a.pb(num%10);
			num/=10;
		}
		int flag=0;
		int count = 0;
		while(flag==0&&count<50)
		{
			vci b;
			for(int i=a.size()-1;i>=0;i--)
			{
				b.pb(a[i]);
			}
			int carry = 0;
			for(int i=0;i<(int)a.size();i++)
			{
				a[i] = a[i]+b[i]+carry;
				carry = a[i]/10;
				a[i] = a[i]%10;
			}
			while(carry!=0)
			{
				a.pb(carry%10);
				carry = carry/10;
			}
			int tempflag=1;
			for(int i=0;i<(int)a.size();i++)
			{
				if(a[i]!=a[a.size()-i-1])
				{
					tempflag=0;
					break;
				}
			}
			flag=tempflag;
			++count;
		}
		if(flag==0)
		++ans;
	}
	cout<<ans<<endl;
}
