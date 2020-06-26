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
	ll count=0;
	for(int i=0;i<2;i++)
	{
		for(int j=(200-(i*200))/100;j>=0;j--)
		{
			for(int k=(200-(i*200)-(j*100))/50;k>=0;k--)
			{
				for(int l=(200-(i*200)-(j*100)-(k*50))/20;l>=0;l--)
				{
					for(int m=(200-(i*200)-(j*100)-(k*50)-(l*20))/10;m>=0;m--)
					{
						for(int n=(200-(i*200)-(j*100)-(k*50)-(l*20)-(m*10))/5;n>=0;n--)
						{
							for(int x=(200-(i*200)-(j*100)-(k*50)-(l*20)-(m*10)-(n*5))/2;x>=0;x--)
							{
								for(int y=(200-(i*200)-(j*100)-(k*50)-(l*20)-(m*10)-(n*5)-(x*2));y>=0;y--)
								{
									if((x*2)+y+(i*200)+(j*100)+(k*50)+(l*20)+(m*10)+(n*5)==200)
									++count;
								}
							}
						}
					}
				}
			}
		}
	}
	cout<<count<<endl;
}
