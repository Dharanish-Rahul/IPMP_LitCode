#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int sum;
	cin>>sum;
	
	int sums[n*(n+1)/2] = {0};
	int a=0;
	int count = 0;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int k=i;k<=j;k++){
				sums[a] = sums[a] + arr[k];
			}
			if(sums[a] == sum){
				for(int k=i;k<=j;k++){
					cout<<arr[k]<<" ";
				}
				count++;
			}
			
		}
	}
	cout<<"\n";
	if(count == 0){
		cout<<"No possible subarrays :( ";
	}
}
