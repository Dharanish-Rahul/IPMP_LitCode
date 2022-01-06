#include<iostream>
using namespace std;


int check(int arr[],int n){
	int sum;
	for(int i=n;i>=0;i--){
		for(int j=0;j<i;j++){
			sum = sum + arr[j];
		}
		if(sum == 0){
			return 1;
		}
		
		sum = 0;
	}
	return -1;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int result = check(arr,n);
	if(result == 1){
		cout<<"true: ";
	}
	else cout<<"false:";
}
