#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	
	int x;
	cout<<"Data: ";
	cin>>x;
	
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(arr[i][j] == x){
				cout<<"The row and coloumn of the element "<<x<<" is"<<i+1<<","<<j+1;
				return 0;
			}
		}
	}
	cout<<"element not found\n";
}
