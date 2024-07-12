#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number :-";
    cin>>n;
    int rev=0;
    int temp=n;
    
    for(;temp>0;temp /=10)
    {
        rev=rev*10 + temp % 10;
    }

    if(rev==n)
    {
        cout<<" no is pllindrom";

    }
    else {
        cout<<"not a palindrom";
    }
    return 0;
}


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;

//     int rev = 0;
//     int temp = n;

//     for (; temp > 0; temp /= 10) {
//         rev = rev * 10 + temp % 10;
//     }

//     if (rev == n) {
//         cout << "The number is a palindrome." << endl;
//     } else {
//         cout << "The number is not a palindrome." << endl;
//     }

//     return 0;
// }



