#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n+2];
	for(int i =0;i<n+2;i++){
		cin>>arr[i];
	}
	cout<<"\n";
	for(int i=0;i<n+1;i++){
		for(int j = i+1;j<n+2;j++){
			if(arr[i]==arr[j]){
				cout<<arr[i]<<"\n";
			}
		}
	}
}
