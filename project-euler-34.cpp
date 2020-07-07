#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{

    ll arr[10];
    arr[0]=1;arr[1]=1;arr[2]=2;arr[3]=6;arr[4]=24;arr[5]=120;arr[6]=720;arr[7]=720*7;arr[8]=arr[7]*8;arr[9]=arr[8]*9;
    ll temp;
    ll ans=0;
    for(ll i=10;i<=10000000;i++)
    {
        ll num=i;
        temp=0;
        while(num)
        {
            temp+=arr[num%10];
            num/=10;
        }
        if(temp==i)
            {

                ans+=i;}
    }
    cout<<ans<<endl;
}
