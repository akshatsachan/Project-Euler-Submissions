#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int counter=1;
    while(counter<1000000)
    {
        int maxnum=-1;
        for(int i=0;i<9;i++)
        {
            if(arr[i]<arr[i+1])
                maxnum=i;
        }
        if(maxnum==-1)
            break;
        int other=-1;
        for(int i=maxnum+1;i<10;i++)
        {
            if(arr[i]>arr[maxnum])
            other=i;
        }
        int temp=arr[maxnum];
        arr[maxnum]=arr[other];
        arr[other]=temp;
        int n=1;
        for(int i=0;i<(10-maxnum)/2;i++)
        {
            temp=arr[i+maxnum+1];
            arr[i+maxnum+1]=arr[10-n];
            arr[10-n]=temp;
            n++;
        }
        counter++;

    //for(int i=0;i<10;i++)
      //  cout<<arr[i]<<"";
        //cout<<endl;
    }
    for(int i=0;i<10;i++)
        cout<<arr[i]<<"";
    cout<<endl;
    cout<<counter<<endl;
}

