#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	
	int next;
	for(int i=0;i<n;i++){
		next = -1;
		
		for(int j = i+1;j<n;j++){
			if(arr[j]>arr[i]){
				next = arr[j];
				break;
			}
		}
		cout<<next<<" ";
	}
	
	return 0;
}
