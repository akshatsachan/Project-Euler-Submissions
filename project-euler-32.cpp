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
	set<int>s;
	for(int i=1;i<=10000;i++)
	{
		for(int j=1;j<=10000;j++)
		{
			int prod=i*j;
			int other=prod;
			int arr[10]={0};
			int temp=i,temp2=j;
			int flag=1;
			while(temp!=0)
			{
				if(temp%10==0)
				{flag=0;break;}
				else
				{
					++arr[temp%10];
				}
				temp/=10;
			}
			if(flag==0)
			continue;
			while(temp2!=0)
			{
				if(temp2%10==0)
				{flag=0;break;}
				else
				{
					++arr[temp2%10];
				}
				temp2/=10;
			}
			if(flag==0)
			continue;
			while(prod!=0)
			{
				if(prod%10==0)
				{flag=0;break;}
				else
				{
					++arr[prod%10];
				}
				prod/=10;
			}
			
			if(flag==0)
			continue;
			for(int k=1;k<10;k++)
			{
				if(arr[k]!=1)
				{flag=0;break;}
			}
			if(flag==1)
			{s.insert(other);cout<<i<<" "<<j<<endl;}
		}
	}
	ll ans=0;
	for(auto itr:s)
	ans+=itr;
	cout<<ans<<endl;
}
