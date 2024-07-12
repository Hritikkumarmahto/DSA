#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int >d;

    d.push_back(2);
    d.push_front(1);

    for(int i:d){
        cout<<i<< " "<<endl;
    }

    // cout<<"popint the elements"<<endl;
    // d.pop_front();
    // d.pop_back();
    // for(int i:d)
    // {
    //     cout<<i<<" "<<endl;
    // }

    // // d.pop_back();
    // // for(int i:d)
    // // {
    // //     cout<<i<<" "<<endl;
    // // }

    cout<<"front element "<<d.at(0);
    
    d.erase(d.begin(),d.begin());
    for(int i:d){
        cout<<"after erase "<<i<<" ";
    }




}