#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int isPowerOfTwo(unsigned n)
{
    return n && (!(n & (n - 1)));
}
 
// Returns position of the only set bit in 'n'
int findPosition(unsigned n)
{
    if (!isPowerOfTwo(n))
        return -1;
 
    unsigned count = 0;
 
    // One by one move the only set bit to right till it reaches end
    while (n)
    {
        n = n >> 1;
 
        // increment count of shifts
        ++count;
    }
 
    return count;
}

int main(){
	int num;
	cin>>num;
	cout<<"Position = "<<findPosition(num);
}
