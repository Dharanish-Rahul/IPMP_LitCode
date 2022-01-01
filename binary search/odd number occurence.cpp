#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int odd(int arr[],int size){
	
	
	int count =0;
	
	for(int i=0;i<size;i++){
		
		for(int j=0;j<size;j++){
			if(arr[i]==arr[j]){
				count++;
			}
			
		}
		if(count%2 != 0){
			count = 0;
			return arr[i];	
		}
		else count = 0;
	}
}

int main(){
	int size;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	int result;
	result = odd(arr,size);
	cout<<result;
}
