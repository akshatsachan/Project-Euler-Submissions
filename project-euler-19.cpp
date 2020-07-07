#include<bits/stdc++.h>
using namespace std;
int main()
{

    int arr[12]={1,4,4,0,2,5,0,3,6,1,4,6};
    int ans=2;
    int prev=0;
    for(int i=1901;i<=2000;i++)
    {
        for(int j=0;j<12;j++)
        {
            arr[j]=(arr[j]+1)%7;
        }
        if(prev==1)
        {
            arr[0]++;
            arr[0]%=7;
            arr[1]++;
            arr[1]%=7;

        }
        prev=0;
        if((i%4==0&&i%100!=0)||(i%400==0))
        {
            prev=1;
            for(int j=2;j<12;j++)
            {
                arr[j]++;arr[j]%=7;
            }
        }
        cout<<i<<endl;
        for(int j=0;j<12;j++)
        {
            if(arr[j]==0)
                ans++;
                cout<<arr[j]<<" ";
        }
        cout<<endl;
        cout<<ans<<endl;
    }
    cout<<ans<<endl;
}
