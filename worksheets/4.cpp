#include<iostream>
using namespace std;
int main()
{
    int n,row,column;
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(column=1;column<row;column++)

        {
            cout<<row;
            //column=column+1; in whilw loop
        }
        cout<<endl;
        //row=row+1;
    }
}