#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int x;
	cin>>x;
	
	for(int i=0;i<n-3;i++){
		for(int j=i+1;j<n-2;j++){
			for(int k=j+1;k<n-1;k++){
				for(int l=k+1;l<n;l++){
				if((arr[i]+arr[j]+arr[k]+arr[l])==x){
					cout<<"quadreplets: "<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" "<<arr[l]<<"\n";
				}
				}
			}
		}
	}
}
