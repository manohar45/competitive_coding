#include <iostream>
using namespace std;

int mult(int a,int n)
{
    if(n==0)
    {
        return 0;
    }

    return a+mult(a,n-1);
}

int main() {
    int a,n;
    cin>>a>>n;

    cout<<mult(a,n)<<endl;
    return 0;

}
