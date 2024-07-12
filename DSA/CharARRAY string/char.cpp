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
bool checkpalin(char a[],int n)
{
    int s=0;
    int e=n-1;

    while(s<=e)
    {
        if(lowercase(a[s]) != lowercase(a[e]))
        {
            return 0;
        }
        else{
            s++;
            e--;
        }

    }
    return 1;
}
void reverse_ch(char name[],int n)
{
    int s=0;
    int e=n-1;

    while(s<e)
    {
        swap(name[s++],name[e--]);
    }
}
int getylength(char name[])
{
    int count=0;
    for(int i=0; name[i] !='\0';i++)
    {
        count++;
    }
    return count;
}
int main(){
    char name[20];

    cout<<"enter name"<<endl;

    cin>>name;

    //name[2] = '\0';     //NULL value allocated int he place of
    int len=getylength(name);

    cout<<"your name is "<<name<<endl;
    cout<<"length of char is  :-"<<len<<endl;
    reverse_ch(name,len);
    cout<<"reversed sring is :"<<name<<endl;
    cout<<"checking "<<checkpalin(name,len);
}