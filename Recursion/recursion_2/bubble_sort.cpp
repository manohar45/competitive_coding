#include <iostream>
using namespace std;

void bubblesort(int a[],int n)
{
    if(n==1)
    {
        return;
    }

    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            swap(a[i],a[i+1]);
        }
    }
    bubblesort(a,n-1);
}

int main() {
    int a[]={5,4,3,1,2};
    int n=sizeof(a)/sizeof(int);
    
    bubblesort(a,n);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
