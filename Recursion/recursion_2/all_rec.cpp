#include <iostream>
using namespace std;

void all(int a[], int i,int n, int key)
{
    if(i==n)
    {
        return ;
    }

    if(a[i]==key)
    {
        cout<<i<<" ";
    }

    all(a,i+1,n,key);

}

int main() {
    int a[]={1,3,4,7,7,7,8,15};
    int key=7;
    int n=sizeof(a)/sizeof(int);
    int i=0;

    all(a,i,n,key);
    return 0;
}
