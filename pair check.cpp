#include<iostream>
using namespace std;

int check(int arr[],int n,int x){
	for(int z=0;z<n;z++){
		for(int i=z+1;i<n;i++){
			int sum = arr[z]+arr[i];
			if(sum == x){
				cout<<arr[i]<<" and "<<arr[z]<<"\n";
				return 1;
			}
		}
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
	
	int x;
	cin>>x;
	
	int result =check(arr,n,x);
	if(result == 1) cout<<"Valid pair exist";
	else cout<<"no valid pair";
	 
}
