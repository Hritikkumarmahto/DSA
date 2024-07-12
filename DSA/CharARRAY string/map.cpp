#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<int ,string>m;
    m[1]="hritk";
    m[2]="kumar ";
    m[3]="mahto";

    m.insert({4,"hello"});

    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding element  "<<m.count(5)<<endl;

    m.erase(4);

    for(auto i:m)

    {
        cout<<i.first<< " " <<i.second<<endl;
    }

    cout<<"finding the element....."<<endl;
    auto it=m.find(5);

    for(auto i=it;i!=m.end();i++)
    {
        cout<<(*i).first<<" "<<(*i).second;
    }
}