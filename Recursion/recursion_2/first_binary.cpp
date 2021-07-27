#include <iostream>
using namespace std;

int first(int a[],int n, int key)
{
    int ans=-1;
    int start=0;
    int end=n-1;
    while(start<end)
    {
        int mid=(start+end)/2;
        if(a[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        else if(a[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return ans;
}

int main() {
    int a[]={1,3,4,7,7,7,8,15};
    int key=7;
    int n=sizeof(a)/sizeof(int);
    cout<<first(a,n,key)<<endl;
}
