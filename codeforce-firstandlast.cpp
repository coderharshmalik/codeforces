#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        int a=n%10;
        while(n/10!=0)
        {
            n=n/10;
        }
        cout<<n+a<<endl;
    }
    return 0;  
}