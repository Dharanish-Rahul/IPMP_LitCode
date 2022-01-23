#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int prod[n*(n+1)/2];
	for(int i=0;i<(n*(n+1)/2);i++){
		prod[i]=1;
	}
	
	int a=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=i;k<=j;k++){
				prod[a] = prod[a]*arr[k];
			}
			a++;
		}
	}
	
	int max = prod[0];
	
	for(int i=0;i< (n*(n+1)/2);i++){
		if(max<prod[i]){
			max = prod[i];
		}
	}
	
	cout<<max<<" ";
}
