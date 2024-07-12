#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node (int value){
        data=value;
        next=nullptr;
    }
};
int main()
{
    Node *head=nullptr;
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        if(head==nullptr)
        {
            head=new Node(arr[i]);
        }
        else{
            Node *temp=new Node(arr[i]);
            temp->next=head;
            head=temp;
        
        }
    }
    Node *current=head;

    while(head!=nullptr)
    {
        cout<<current->data;
    }


 return 0;
}