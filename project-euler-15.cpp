#include<bits/stdc++.h>
using namespace std;
int sm=0;
int func(int a,int b)
{
    cout<<sm<<" ";
    sm++;
    int num1=0,num2=0;
    if(b+1<20)
        num1=func(a,b+1);
    if(a+1<20)
        num2=func(a+1,b);
    if(a==19||b==19)
        return 1;
    return num1+num2;

}
int main(){
int ans=func(0,1)+func(1,0);
cout<<ans<<endl;
}
