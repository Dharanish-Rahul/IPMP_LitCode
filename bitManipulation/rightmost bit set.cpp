#include <bits/stdc++.h>
using namespace std;
 
int fun(unsigned int n)
{
    return n & (n - 1);
}
 

int main()
{
    int n ;
    cin>>n;
    cout<<"The number after unsetting the";
    cout<<" rightmost set bit "<<fun(n);
    return 0;
}
