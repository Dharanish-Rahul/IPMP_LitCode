#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
	
	int count[10] = {0};
	for(int i=0;i<n;i++){
		count[arr[i]]++;
	}
	for(int i=1;i<10;i++){
		count[i]=count[i]+count[i-1];
	}
	int temp[n];
	for(int i=n-1;i>=0;i--){
		temp[count[arr[i]]-1] =  arr[i];
	}
	
	for(int i=0;i<n;i++){
		arr[i]=temp[i];
		cout<<arr[i];
	}
}
