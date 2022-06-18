#include<iostream>//print factorial numbers using recursion.
using namespace std;
int main(void)
{
    int n;
   long  int fact(int);
    cout<<"enter the numbers:";
    cin>>n;
    cout<<"the factoril of "<<n <<" is "<<fact(n);
}
  long fact(int num)
{
    if(num==0)
    return 1;
    else
    return num*fact(num-1);
    
}
