#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int pre[n],suf[n];
	
	pre[0]=1;
	suf[n-1]=1;
	
	for(int i=1;i<n;i++){
		pre[i]=arr[i-1]*pre[i-1];
	}
	
	for(int i=n-2;i>=0;i--){
		suf[i]=arr[i+1]*suf[i+1];
	}
	int prod[n];
	for(int i=0;i<n;i++){
		prod[i] = suf[i]*pre[i];
		cout<<prod[i]<<" ";
	}
	
	

}
