#include<bits/stdc++.h>
using  namespace std;
int main()
{
    int n;
    cout<<"enter the number ";
    cin>>n;
    // for(int i=0;i<n;i++)
    // {
    //     for(int k=n-i;k>0;k--)
    //     {
    //         cout<<" ";
    //     }
    //    for(int j=1;j<2*n-1;j++) {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    for (int i = 1; i <= n; i++) {
        // n-i leading spaces
        for (int j = 0; j < n - i; j++)
            cout << " ";
 
        // i elements
        for (int j = 1; j <= i; j++)
            cout << "* ";
     
         cout << endl;
}
}