#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int> maxi;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    cout<<maxi.size()<<"size -"<<endl;
    int n=maxi.size();

    for(int i=0;i<n;i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    priority_queue<int,vector<int>,greater<int> > mini;

    mini.push(1);
    mini.push(4);
    mini.push(3);
    mini.push(2);
    mini.push(5);
    int m=mini.size();
    for(int i=0;i<m;i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();

    }
    cout<<endl;

    cout<<"is the queuq is empty -"<<mini.empty();

    
}