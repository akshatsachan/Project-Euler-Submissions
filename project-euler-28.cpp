#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n=1001*1001;

    ll ans=1;
    ll incr=2;
    int num=-1;
    for(int i=2;i<n;)
    {

        ans+=i+1;
        num++;
        if(num==3)
        {
            ++incr;
            ++incr;
            num=-1;
        }
        i+=incr;
        //cout<<ans<<endl;
    }
    cout<<ans<<endl;
}
