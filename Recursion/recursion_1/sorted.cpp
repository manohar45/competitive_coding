#include <iostream>
using namespace std;

bool sorted(int a[],int n)
{
    if(n==0 || n==1)
    {
        return true;
    }

    if(a[0]<a[1] && sorted(a+1,n-1))
    {
        return true;
    }

    return false;
}

int main() {
   int a[]={1,2,3,14,5};
   int n=5;

   cout<<sorted(a,n);
}
