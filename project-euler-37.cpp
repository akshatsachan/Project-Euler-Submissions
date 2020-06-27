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
	int num=1000000;
	bool arr[num];
	rep(i,0,num)
	arr[i]=true;
	arr[0]=false;
	arr[1]=false;
	for(int i=0;i<num;i++)
	{
		if(arr[i]==true)
		{
			int ind=i+i;
			while(ind<num)
			{
				arr[ind]=false;
				ind+=i;
			}
		}
	}
	
	int count=0;
	ll ans=0;
	rep(i,10,num)
	{
		if(arr[i]==true)
		{
			int flag=1;
			int temp=i;
			while(temp!=0)
			{
				if(arr[temp]!=true)
				{flag=0;break;}
				temp/=10;
			}
			temp=i;
			ll n=1;
			while(n*10<=temp)
			{
				n*=10;
			}
			while(temp!=0)
			{
				if(arr[temp]!=true)
				{flag=0;break;}
				temp=temp%n;
				n/=10;
			}
			if(flag==1)
			{++count;ans+=i;}
		}
	}
	cout<<count<<endl;
	cout<<ans<<endl;
}
