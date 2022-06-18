//prog on call by value and call by function
#include<iostream>
using namespace std;
void f(int*p,int m)
{
    m=m+5;
    *p=*p+m;
    return;
}
int main()
{
    int i=5,j=10;
    f(&i,j);
    cout<<i+j;

}