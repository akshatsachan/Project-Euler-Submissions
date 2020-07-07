#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll ans=0;
    for(ll i=10;i<=1000000;i++)
    {
        int num=i;
        int temp=0;
        while(num)
            {
                temp+=pow(num%10,5);
                num/=10;
            }
        if(temp==i)
        {
            cout<<i<<endl;
            ans+=i;
        }
    }
    cout<<ans<<endl;
}
