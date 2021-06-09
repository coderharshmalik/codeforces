//B. Queue at the School

#include <iostream>
using namespace std;

int main()
{
    int n, t, u;
    cin >> n >> t;
    char seq[n];
    for (u = 1; u <= n; u++)
    {
        cin >> seq[u];
    }


    for (int r=1; r<=t; r++)
    {
        for (int j=1; j<n; j++)
        {
            if (seq[j] == 'B' && seq[j + 1] == 'G')
            {
                swap(seq[j],seq[j+1]);
                j++;
            }
            
        }
    }


    for (u = 1; u <= n; u++)
    {
        cout << seq[u];
    }

  return 0;
}