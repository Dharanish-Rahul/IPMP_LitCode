#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int temp = n;
	int count=0;
	while(temp>0){
		count++;
		temp=temp/10;
	}
	
	cout<<count;
	for(int i =0;;i++){
		int num = n + i;
		check(num);
	}
}
int str[count], rev[count];
	
	while(n>0){
		for(int i = 0;i<count;i++){
			n%10 = str[i];
			n = n/10;
		}
	}
	int j=count-1;
	for(int i=0;i<count;i++){
		str[i] = rev[j];
		j--;
	}
	int check = 0;
	for(int i=0;i<count;i++){
		if(str[i] == rev[i]){
			check++;
		}
	}
	
	if(check == count) cout<<"";
