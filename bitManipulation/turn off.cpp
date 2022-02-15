#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int func(int n){
	return n & (n-1);
}

int main(){
	int num;
	cin>>num;
	cout<<"The number after turning of the rightmost bit "<<func(num);
	
}
