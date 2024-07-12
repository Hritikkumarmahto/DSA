// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     // int arr[]={1,3,4,5,2}
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n;i++){
//         cin>>arr[i];
//     }
//     int maxi=arr[0];
//     for(int i=0;i<n;i++){
//         if(maxi<arr[i]){
//             maxi=arr[i];
//         }
//         cout<<"asdf";
//     }
//     cout<<"aaaa";
//      return maxi;
// }
#include <iostream>

using namespace std;

int largest(int arr[], int n)
{
    int maxi = arr[0];
    for (int i = 0; i < n; i++)
    {

        if (maxi < arr[i])
        {
            maxi = arr[i];
        }
    }
    return maxi;    
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int result = largest(arr, n);
    cout << result;
}