#include<iostream>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int arr1[n],arr2[m];
	for(int i = 0;i<n;i++){
		cin>>arr1[i];
	}
	for(int i=0;i<m;i++){
		cin>>arr2[i];
	}
	
	int i = 0, j = 0;
    while (i < n && j < m) {
        if (arr1[i] < arr2[j])
            cout << arr1[i++] << " ";
 
        else if (arr2[j] < arr1[i])
            cout << arr2[j++] << " ";
 
        else {
            cout << arr2[j++] << " ";
            i++;
        }
    }
 

    while (i < n)
        cout << arr1[i++] << " ";
 
    while (j < m)
        cout << arr2[j++] << " ";
}
