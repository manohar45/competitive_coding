#include <iostream>
using namespace std;

int first(int a[],int n, int key)
{
    if(n==0)
    {
        return -1;
    }

    if(a[0]==key)
    {
        return 0;
    }

    int i=first(a+1,n-1,key);
    if(i==-1)
    {
        return -1;
    }

    return i+1;
}

int main() {
    int a[]={1,4,5,9,7,7,7,5,8,15};
    int key=7;
    int n=sizeof(a)/sizeof(int);

    cout<<first(a,n,key)<<endl;
}
