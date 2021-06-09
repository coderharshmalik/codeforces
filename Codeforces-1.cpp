// Young Physicist

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[3][3];
    for(int r=0;r<=2;r++)
    {
        for(int c=0;c<=2;c++)
        {
            cin>>a[r][c];
        }
    }
    if((a[0][0]+a[1][0]+a[2][0])==0 && (a[0][1]+a[1][1]+a[2][1])==0 && (a[0][2]+a[1][2]+a[2][2])==0)
    {
        cout<<"YES";
    }
    else
    cout<<"NO";
    return 0;
    
}