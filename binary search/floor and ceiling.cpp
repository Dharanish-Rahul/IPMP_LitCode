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
	cout<<"\n"<<x<<"\n";
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
	
	if(x < arr[0]){
		cout<<"Floor: null \n";
		cout<<"ceiling: "<<arr[0];
	}
	else if (x > arr[n-1]){
		cout<<"Floor: "<<arr[n-1]<<"\n";
		cout<<"ceiling : null";
	}
	
	else if(x==arr[n-1]){
		cout<<"floor and ceiling: "<<arr[n-1];
	}
	else{
	
	for(int i=0;i<n-1;i++){
		if(x>arr[i] && x < arr[i+1]){
			cout<<"Floor : "<<arr[i];
			cout<<"ceiling: "<<arr[i+1];
		}
		else if(x == arr[i]){
			cout<<"Floor and ceiling: "<<arr[i];
		}
	}
}
}

