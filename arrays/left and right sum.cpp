#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int left = 0,right  = 0;
	for(int i = 1;i<n;i++){
		for(int j=0;j<i;j++){
			left = left + arr[j];
		}
		for(int j = i+1;j<n;j++){
			right = right + arr[j];
		}
		
		if(left == right){
			cout<<"Point: "<<arr[i];
		}
		else{
			left = right = 0;
		}
	}
}
