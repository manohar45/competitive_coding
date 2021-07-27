#include <iostream>
using namespace std;

int power(int a,int n)
{
    if(n==0)
    {
        return 1;
    }

    return a*power(a,n-1);
}

int fast(int a,int n)
{
    if(n==0)
    {
        return 1;
    }

    int val=fast(a,n/2);
    val=val*val;

    if(n & 1)
    {
        return a*val;
    }
    else
    {
        return val;
    }
}

int main() {
    int a,n;
    cin>>a>>n;

    cout<<power(a,n)<<endl;
    cout<<fast(a,n)<<endl;

    return 0;
}
