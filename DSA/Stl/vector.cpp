#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    // vector<int> a(5,1);

    // for(int i:a)
    // {
    //     cout<<i<<endl;
    // }
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    
    cout << v.size()<<endl;
    cout<<"before pop:-";
    for(int i:v){
        cout<<i<<" "<<endl;;
    }
    cout<<"after pop:-";
    v.pop_back();
    for(int i:v)
    {
        cout<<i<<" ";
    }
    // cout << v.capacity();

}
