#include<iostream>
using namespace std;

void swap_value( int &a,int &b){
	
	int temp;
	temp=a;
	a=b;
	b=temp;

}

void bubble(int arr[],int n,int k){
	int i,j;
	for(i=0;i<k-1;i++){
		for(j=0;j<n-1;j++){
			if (arr[j+1]<arr[j]){
			swap_value(arr[j],arr[j+1]);
			}
		}
	}

}
int main(){
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int k;
	cin>>k;
	
	bubble(arr,n,k);
	
	cout<<arr[k-1]<<"\n";
}
