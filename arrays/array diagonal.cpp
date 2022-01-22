#include<iostream>
using namespace std;

int main(){
	int m,n;
	cin>>m>>n;
	
	int arr[m][n];
	
	for(int i =0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	
	int k=n+m;
	
	for(int a=0;a<k-1;a++){
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(i+j==a){
					cout<<arr[i][j]<<" ";
				}
			}
		}
		cout<<"\n";
	}
}
