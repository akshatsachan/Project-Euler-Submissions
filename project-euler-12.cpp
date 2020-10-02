#include<bits/stdc++.h>
using namespace std;
//using brute force solution
int main()
{
int counter=0;
long long int sum=1;
long long int num=2;
int x=1;
while(x)
{
    counter=0;
    for(long long int i=1;i<=sqrt(sum);i++)
    {
        if(sum%i==0)
        {
            counter++;
            if(sum%i!=i)
                counter++;
        }
    }
    if(counter>500)
        break;
    sum+=num;
    num++;

}
cout<<sum<<endl;
}
