#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int k;
	cin>>k;
	
	int arr[n], count[k] = {0};
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	for(int i=0;i<n;i++){
		count[arr[i]]++;
	}
	
	int max = count[0];
	
	for(int i=0;i<k;i++){
		if(count[i]>max){
			max=count[i];
		}
	}
	
	for(int i=0;i<n;i++){
		if(max == count[i]){
			cout<<i<<" ";
		}
	}
	
}
