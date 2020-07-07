#include<bits/stdc++.h>
using namespace std;
int main()
{

    int ans=0;
    int counter=0;
    int arr[10000]={0};
    for(int i=2;i<=10000;i++)
    {
        if(arr[i]==0)
        {int sum=1;
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                sum+=j;
                if(i/j!=j)
                    sum+=(i/j);
            }
        }
        int sum2=1;
        for(int j=2;j<=sqrt(sum);j++)
        {
            if(sum%j==0)
            {
                sum2+=j;
                if(sum/j!=j)
                    sum2+=(sum/j);
            }
        }
        if(sum2==i&&sum<=10000&&sum!=i)
        {
            arr[i]=1;
            //arr[sum2]=1;
            ans+=i+sum;
            counter++;
                counter++;
                cout<<i<<" "<<sum<<endl;
                arr[sum]=1;
        }
        }
    }
    cout<<counter<<endl;
    cout<<ans<<endl;
}
