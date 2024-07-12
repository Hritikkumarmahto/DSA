#include<iostream>
using namespace std;
char lowercase(char ch)
{
    if(ch>='a' &&ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
char uppercase(char ch)
{
    if(ch>='A' &&ch<='Z'){
        return ch;
    }
    else{
        char temp=ch-'a'+'A';
        return temp;
    }
}
int main()
{
    cout<<uppercase('a');
    cout<<lowercase('A');
}