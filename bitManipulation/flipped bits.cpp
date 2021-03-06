#include <iostream>
using namespace std;


int countSetBits(int n)
{
	int count = 0;
	while (n > 0)
	{
		count++;
		n &= (n-1);
	}
	return count;
}

int FlippedCount(int a, int b)
{
	// Return count of set bits in a XOR b
	return countSetBits(a^b);
}

int main()
{
	int a, b;
	cin>>a>>b; 
	cout << FlippedCount(a, b)<<endl;
	return 0;
}

