//This code will not run if your system/IDE does not have boost libraries installed
#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision; 
using namespace std;

#define ll cpp_int

int main() {
//This is a brute force solution
//There is also an efficient solution for this which uses Pascal Triangle
	ll arr[101]={0};
	arr[0] = 1;
	for(int i=1;i<=100;i+=1)
	{
		arr[i] = arr[i-1]*(cpp_int)i;
	}
	int count = 0;
	ll num = 1000000;
	for(int i=1;i<=100;i+=1)
	{
		for(int j=1;j<=i;j+=1)
		{
			if(arr[i]/(arr[j]*arr[i-j])>num)
			++count;
		}
	}
	cout<<count<<endl;
	return 0;
}
