#include<iostream>
using namespace std;

int main(){
	char arr[8];
	
	for(int i=0;i<8;i++){
		cin>>arr[i];
	}
	char b[8];
	int j=0;
	for(int i=0;i<8;i=i+2){
		b[j]=arr[i];
		j++;
	}
	j=4;
	for(int i=1;i<8;i+=2){
		b[j] = arr[i];
		j++; 
	}
	
	for(int i=0;i<8;i++){
		cout<<b[i];
	}
	cout<<"\n";
}
