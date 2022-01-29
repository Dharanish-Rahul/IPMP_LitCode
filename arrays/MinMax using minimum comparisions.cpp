#include<iostream>
using namespace std;


struct Pair 
{
    int min;
    int max;
}; 

Pair getMinMax(int arr[], int n)
{
    struct Pair minmax;     
    int i;
    
    if (n == 1)
    {
        minmax.max = arr[0];
        minmax.min = arr[0];     
        return minmax;
    } 
    
    
    if (arr[0] > arr[1]) 
    {
        minmax.max = arr[0];
        minmax.min = arr[1];
    } 
    else
    {
        minmax.max = arr[1];
        minmax.min = arr[0];
    } 
    
    for(i = 2; i < n; i++)
    {
        if (arr[i] > minmax.max){
			minmax.max = arr[i];
			//cout<<"Max: "<<minmax.max<<" ";
    	}
        else if (arr[i] < minmax.min){
		    minmax.min = arr[i];
		    //cout<<"Min: "<<minmax.min<<" ";
			}
    }
    cout<<"\n";
    return minmax;
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    
    struct Pair minmax = getMinMax(arr, n);
    
    cout << "Minimum element is " 
         << minmax.min << endl;
    cout << "Maximum element is " 
         << minmax.max;
         
    return 0;
} 
