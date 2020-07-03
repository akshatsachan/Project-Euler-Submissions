 
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
	ifstream cin;
	cin.open("42_words.txt");
	vector<string> s;
	string temp;
	cin>>temp;
	stringstream ss(temp);
	while(ss.good())
	{
		string substr;
		getline(ss, substr ,',');
		s.push_back(substr);
	}
	
	
	
	bool arr[200000];
	rep(i,0,200000)
	{
		arr[i]=false;
		
	}
	rep(i,1,521)
	{
		int num = (i*(i+1))/2;
		arr[num] =true;
	}
	int ans=0;
	rep(i,0,s.size())
	{
		int sum=0;
		rep(j,0,s[i].length())
		{
			sum += (int)(s[i][j])-64;
			
		}
		sum += 60;
		if(sum<200000)
		{
			if(arr[sum]==true)
			++ans;
		}
	}
	cout<<ans<<endl;
	cin.close();
}
