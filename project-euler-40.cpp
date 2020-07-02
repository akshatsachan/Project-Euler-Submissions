 
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
	ll ans=1;
	
	for(ll num=100;num<=1000000;num*=10)
	{
		ll temp=num;
		ll ind=1;
		ll count=0;
		while(temp>(9*ind*pow(10,ind-1)))
		{
			temp-=(9*ind*pow(10,ind-1));
			count+=(9*pow(10,ind-1));
			++ind;
		}
		ll pos = pow(10,ind-(temp%ind));
		
		count+=(temp/ind);
		cout<<"<----->"<<endl;
		cout<<pos<<endl;
		cout<<ind<<endl;
		if(temp%ind!=0)
		++count;
		cout<<count<<endl;
		cout<<(count/pos)%10<<endl;
		ans=ans*((count/pos)%10);
	}
	cout<<ans<<endl;
}
