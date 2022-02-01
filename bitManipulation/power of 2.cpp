#include<iostream>
#include<math.h>
using namespace std;

int checkdivisible(int x){
	if(ceil(log2(x)) == floor(log2(x))) cout<<"Power of 2\n";
	else cout<<"Not a Power of 2\n";
}

int main(){
	int num;
	cin>>num;
	
	checkdivisible(num);
}

