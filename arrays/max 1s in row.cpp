#include<iostream>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	
	int count[n]={0};
	int row = 0;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[i][j] == 1){
				count[i]++;
				
			}
			
		}
		//cout<<"\n"<<count[i];
	}
	
	int max = count[0];
	for(int i=1;i<n;i++){
		if(max < count[i]){
			max = count[i];
			row = i;
			//cout<<"\n\n"<<row;
		}
	}
	
	cout<<"\n\n"<<row;
}
