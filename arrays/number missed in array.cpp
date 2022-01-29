#include<iostream>
using namespace std;

int findmax( int arr[],int n){
	int a;
	a=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>a){
			a=arr[i];
		}
	}
	return a;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		//cout<<"\n"<<arr[i];
	}
	int max;
	max = findmax(arr,n);
	int count=0;
	for(int a = 1; a <= max; a++){
		for(int i=0;i<n;i++){
			if(arr[i]!=a){
				count++;
			}
		}
		if(count==n){
			cout<<"\n"<<a;
		}
	}
	
}
