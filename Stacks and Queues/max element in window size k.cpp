#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int k;
	cout<<"K: \n";
	cin>>k;
	int max;
	
	for(int i=0;i<=n-k;i++){
		for(int j=i;j<i+k;j++){
			max=arr[j];
			if(max<arr[j]){
				max=arr[j];
			}
		}
		cout<<max<<" ";
	}
}
