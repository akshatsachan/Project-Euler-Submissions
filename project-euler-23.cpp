#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[28124]={0};
    for(int i=12;i<28124;i++)
    {
        int sum=1;
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                sum+=j;
                if(i/j!=j)
                    sum+=(i/j);
            }

        }
        if(sum>i)
            arr[i]=1;
    }
    long long int ans=0;
    for(int i=28100;i<28124;i++)
        if(arr[i]==0)
        cout<<i<<endl;
    int ansarr[28124]={0};
    for(int i=0;i<28124;i++)
    {
        if(arr[i]==1)
            for(int j=0;j<28124;j++)
            {
                if(arr[j]==1&&i+j<28124)
                    ansarr[i+j]=1;


            }
    }

    for(int i=0;i<28124;i++)
    if(ansarr[i]==0)
    {//cout<<i<<endl;
    ans+=i;
    }
    cout<<ans<<endl;

}
