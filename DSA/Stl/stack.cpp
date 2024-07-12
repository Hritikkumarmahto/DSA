#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> s;

    s.push("kumar");
    s.push("hritik");
    s.push("mahto");

    cout<<" name :-"<<s.top();

    s.pop();
    cout<<" name :-"<<s.top();




}