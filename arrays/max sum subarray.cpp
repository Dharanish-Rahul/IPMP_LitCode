#include<iostream>
using namespace std;

int main(){
	int n,a=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int sum[n*(n+1)/2] = {0};
	
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			for(int k=i;k<=j;k++){
				sum[a]=sum[a]+arr[k];
			}
			a++;
		}
	}
	int max=sum[0];
	for(int i=0;i<(n*(n+1)/2);i++){
		if(sum[i]>max){
			max = sum[i];
		}
	}
	
	cout<<max<<"\n";
}
