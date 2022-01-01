#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binary(int arr[],int l,int h,int x){
	int mid=(l+h)/2;
	if(x>arr[mid]){
		binary(arr,mid+1,h,x);
	}
	else if(x<arr[mid]){
		binary(arr,l,mid-1,x);
	}
	else if (x == arr[mid]){
		cout<<"index: "<<mid;
	}
	else cout<<"no element found";
}
int main(){
	int x,n;
	cin>>x>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	binary(arr,0,n-1,x);
}
