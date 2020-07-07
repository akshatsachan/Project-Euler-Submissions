#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using boost::multiprecision::cpp_int;
using namespace std;
int main()
{
    cpp_int fact=1;
    int num=100;
    while(num>0)
    {
        fact*=num;
        num--;
    }
    int ans=0;
    while(fact>0)
    {
        ans+=(fact%10);
        fact/=10;
    }
    cout<<ans<<endl;
}
