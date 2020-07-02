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
This code is used for showing all the possibile combinations of  digit numbers that seem to satisfy the condition specified in the question.
Out the specified combinations you should find the four suitable ones manually and then compute the answer as specified in the question
*/
int main() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cout<<"10n+c/10c+d=n/d"<<endl;
	int c;
	for(int i=1;i<=9;i++)
	{
		for(int j=1;j<=9;j++)
		{
			if((9*i*j)%((10*i)-j)==0)
			{
				c = (9*i*j)/((10*i)-j);
				if(10*i+c<10*c+j)
				{
					cout<<10*i+c<<" "<<10*c+j<<endl;
				}
			}
		}
	}
}
