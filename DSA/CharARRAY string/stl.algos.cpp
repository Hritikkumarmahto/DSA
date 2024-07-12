#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main()
{
    vector<int >n;
    n.push_back(1);
    n.push_back(2);
    n.push_back(5);
    n.push_back(7);
    n.push_back(9);
    cout<<n.size();

    cout<<binary_search(n.begin(),n.end(),7)<<endl;

    int a=3;
    int b=4;

    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;

    swap(a,b);
    cout<<a;
    cout<<b;

    string abce="abce";

    reverse(abce.begin(),abce.end());
    cout<<abce<<endl;

    cout<<sort(n.begin(),n.end());



}