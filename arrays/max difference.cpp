#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int size=n*(n-1)/2;
	int newa[size];
	int *p = newa;
	int k = 0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			*(p+k) = (arr[j]-arr[i]);
			k++;
		}
	}
	int max = *p;
	for(int i = 0;i < size;i++){
		cout << "\n" << *(p+i) << " max:" << max;
		if(*(p+i) > max){
			max = *(p+i);
		}
	}
	cout<<"\n"<<max;
}
