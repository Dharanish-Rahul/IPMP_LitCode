#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int sum[n*(n-1)/2][3];
	
	for(int i =0;i<n;i++)
	for(int k = 0 ; k<n*(n-1)/2;k++){
		for(int j=i+1;j<n;j++){
			sum[k][0] = abs(arr[i]+arr[j]);
			sum[k][1] = arr[i];
			sum[k][2] = arr[j];
		}
	}
	
	int min = sum[0][0];
	for(int i=0;i<n*(n-1)/2;i++){
		if(sum[i][0]<min){
			min=sum[i][0];
		}
	}
	
	for(int i=0;i<n*(n-1)/2;i++){
		if(sum[i][0]==min){
			cout<<sum[i][1]<<" "<<sum[i][2];
		}
	}
}
