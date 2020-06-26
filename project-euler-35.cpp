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
	bool arr[1000000];
	rep(i,0,1000000)
	{
		arr[i]=true;
	}
	arr[0]=false;
	arr[1]=false;
	rep(i,0,1000000)
	{
		if(arr[i]==true)
		{
			int ind=i+i;
			while(ind<1000000)
			{
				arr[ind]=false;
				ind+=i;
			}
		}
	}
	int num=0;
	rep(i,0,10)
	{
		if(arr[i]==true)
		{
			++num;
		}
	}
	rep(i,10,100)
	{
		if(arr[i]==true)
		{
			int temp=((i%10)*10)+(i/10);
			if(arr[temp]==true)
			{
				++num;
			}
		}
	}
	rep(i,100,1000)
	{
		if(arr[i]==true)
		{
			int count=0;
			int temp=i;
			int flag=1;
			while(count<2)
			{
				temp=((temp%100)*10)+(temp/100);
				if(arr[temp]==false)
				{flag=0;break;}
				++count;
			}
			if(flag==1)
			{++num;
				cout<<i<<" ";
			}
		}
	}
	cout<<endl;
	rep(i,1000,10000)
	{
		if(arr[i]==true)
		{
			int count=0;
			int temp=i;
			int flag=1;
			while(count<3)
			{
				temp=((temp%1000)*10)+(temp/1000);
				if(arr[temp]==false)
				{flag=0;break;}
				++count;
			}
			if(flag==1)
			++num;
		}
	}
	rep(i,10000,100000)
	{
		if(arr[i]==true)
		{
			int count=0;
			int temp=i;
			int flag=1;
			while(count<4)
			{
				temp=((temp%10000)*10)+(temp/10000);
				if(arr[temp]==false)
				{flag=0;break;}
				++count;
			}
			if(flag==1)
			++num;
		}
	}
	rep(i,100000,1000000)
	{
		if(arr[i]==true)
		{
			int count=0;
			int temp=i;
			int flag=1;
			while(count<5)
			{
				temp=((temp%100000)*10)+(temp/100000);
				if(arr[temp]==false)
				{flag=0;break;}
				++count;
			}
			if(flag==1)
			++num;
		}
	}
	cout<<num<<endl;
}
