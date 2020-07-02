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
	int arr[1001]={0};
	set<pii>s;
	for(int i=1;i<=1000;i++)
	{
		for(int j=1;j<i;j++)
		{
			int num1=i*i;
			int num2=j*j;
			if(i+j+(int)sqrt(num1-num2)<=1000&&(int)sqrt(num1-num2)*(int)sqrt(num1-num2)==num1-num2)
			{
				if(s.find(mp((int)sqrt(num1-num2),j))==s.end())
				{++arr[i+j+(int)sqrt(num1-num2)];s.insert(mp(j,(int)sqrt(num1-num2)));}
			}
		}
	}
	int max=-1;
	int ind=0;
	rep(i,0,1001)
	{
		if(arr[i]>max)
		{max=arr[i];ind=i;}
	}
	cout<<ind<<endl;
	
}
