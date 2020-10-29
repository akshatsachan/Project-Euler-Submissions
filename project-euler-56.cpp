#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp> 
using boost::multiprecision::cpp_int;
using namespace std;

int main() {
	cpp_int sum = 1;
	for(cpp_int i=2;i<100;i = i+1)
	{
		cpp_int x = 1;
		for(cpp_int j=1;j<100;j = j+1)
		{
			x = x*i;
			cpp_int temp = x;
			cpp_int tempsum = 0;
			while(temp>0)
			{
				tempsum = tempsum+(temp%10);
				temp = temp/10;
			}
			if(tempsum>sum)
			sum = tempsum;
		}
	}
	cout<<sum<<endl;
	return 0;
}
