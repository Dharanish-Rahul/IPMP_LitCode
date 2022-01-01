#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
	
	int m,n;
	int arr1[] = {1,2,3,4,5};
	int arr2[] = {4,5,6,7,8,9};
	
	m = sizeof(arr1)/sizeof(arr1[0]);
	n = sizeof(arr2)/sizeof(arr2[0]);
	
	int i=0,j=0;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(arr1[i]==arr2[j]){
				cout<<arr1[i]<<" ";
			}
		}
	}
}
