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
	int arr[10];
	rep(i,0,10)
	arr[i]=0;
	arr[0]=1;
	ll ans;
	for(int i=9000;i<=9876;i++)
	{
		rep(k,0,10)
		arr[k]=0;
		arr[0]=1;
		int temp=i;
		rep(z,0,4)		
		{++arr[temp%10];temp/=10;}
		temp=i*2;
		rep(z,0,5)		
		{++arr[temp%10];temp/=10;}
		int flag=1;
		rep(k,0,10)
		{
			if(arr[k]!=1)
			{flag=0;break;}
		}
		if(flag==1)
		{
			ans = (i*pow(10,5))+i*2;
		}
	}
	cout<<ans<<endl;
}
