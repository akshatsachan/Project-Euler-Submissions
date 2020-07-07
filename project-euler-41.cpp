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
/*
 * This code prints all the possible pandigital primes 
 * for different values of n
 */
int main() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	for(int n=1;n<=9;n++)
	{
		int arr[n];
		rep(i,0,n)
		{
			arr[i]=i+1;
		}
		int flag=1;
		ll ans=0;
		do
		{
			string s="";
			rep(i,0,n)
			{
				s+=(char)(arr[i]+48);
			}
			
			ll num = stoll(s);
			
			int other=1;
			for(ll i=2;i*i<num;i++)
			{
				if(num%i==0)
				{other=0;break;}
			}
			if(other==1)
			ans=num;
			int ind=-1;
			rep(i,0,n-1)
			{
				if(arr[i+1]>arr[i])
				{ind=i;}
			}
			int ind2=-1;
			if(ind==-1)
			flag=0;
			else
			{
				rep(i,ind+1,n)
				{
					if(arr[ind]<arr[i])
					ind2=i;
				}
				int temp=arr[ind];
				arr[ind]=arr[ind2];
				arr[ind2]=temp;
				reverse(arr+ind+1,arr+n);
			}
			
		}while(flag==1);
		if(ans!=0)
		cout<<ans<<endl;
	}
}
