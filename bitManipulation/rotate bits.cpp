#include<iostream>
 
using namespace std;
#define INT_BITS 32
class gfg
{
     

public:
int leftRotate(int n, unsigned int d)
{
     
    int result = (n << d)|(n >> (INT_BITS - d));
    return result;
}
 

int rightRotate(int n, unsigned int d)
{
    int result = (n >> d)|(n << (INT_BITS - d));
    return result;
}
};
 

int main()
{
    gfg g;
    int n,d;
    cin>>n>>d;
    cout << "Left Rotation of " << n <<" by " << d << " is ";
    cout << g.leftRotate(n, d);
    cout << "\nRight Rotation of " << n <<" by " << d << " is ";
    cout << g.rightRotate(n, d);
    //getchar();
}
