#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int reverse(int x){
	unsigned int ans = 0;
	for(int i=0;i<31;i++){
		ans = ans | (x & 1);
		ans <<= 1;
		x >>= 1;
		cout<<ans<<"\n";
	}
	return ans;
}

int main(){
	unsigned int num;
	cin>>num;
	cout<<reverse(num)<<"\n";
	//cout<<reverse(INT_MAX);
}
