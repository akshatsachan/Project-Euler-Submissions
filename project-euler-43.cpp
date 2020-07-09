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
#define MOD 1000000007

int main() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s = "0123456789";
	char temp;
	
	ll ans=0;
	int flag=1;
	do
	{
		int otherflag=1;
		int num1;
		string s1="";
		s1+=s[1];s1+=s[2];s1+=s[3];
		num1=stoi(s1);
		if(num1%2!=0)
		otherflag=0;
		s1="";
		s1+=s[2];s1+=s[3];s1+=s[4];
		num1=stoi(s1);
		if(num1%3!=0)
		otherflag=0;
		s1="";
		s1+=s[3];s1+=s[4];s1+=s[5];
		num1=stoi(s1);
		if(num1%5!=0)
		otherflag=0;
		s1="";
		s1+=s[4];s1+=s[5];s1+=s[6];
		num1=stoi(s1);
		if(num1%7!=0)
		otherflag=0;
		s1="";
		s1+=s[5];s1+=s[6];s1+=s[7];
		num1=stoi(s1);
		if(num1%11!=0)
		otherflag=0;
		s1="";
		s1+=s[6];s1+=s[7];s1+=s[8];
		num1=stoi(s1);
		if(num1%13!=0)
		otherflag=0;
		s1="";
		s1+=s[7];s1+=s[8];s1+=s[9];
		num1=stoi(s1);
		if(num1%17!=0)
		otherflag=0;
		if(otherflag==1)
		ans+=stoll(s);
		int ind=-1;
		rep(i,0,9)
		{
			if(s[i]<s[i+1])
			ind=i;
		}
		if(ind==-1)
		flag=0;
		else
		{
			int l;
			rep(i,ind,10)
			{
				if(s[i]>s[ind])
				l=i;
			}
			temp=s[ind];
			s[ind]=s[l];
			s[l]=temp;
			reverse(s.begin()+ind+1,s.end());
		}
		
	}while(flag==1);
	cout<<ans<<endl;
}
