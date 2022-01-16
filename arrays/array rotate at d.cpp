#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int d;
	cin>>d;
	
	int temp[n];
	int i=0;
	while(arr[i]!=d) i++;
	int j=0;
	for(;i<n;i++){
		temp[j] = arr[i];
		j++;
	}
	i=0;
	do{
		temp[j] = arr[i];
		j++;
		i++;
	}while(arr[i]!=d);
	
	for(int k=1;k<n;k++){
		cout<<temp[k]<<" ";
	}
	cout<<temp[0]<<"\n";
	
}
