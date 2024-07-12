/*stack ang heap memory

int arr[n] // it creats a heap memory it is a bad practice

Because when we compile a program it come with some space in the memory so when we give size of the array in the 
runtime it store in the heap memory  if the size of the heap meomory is gtreater then then the stack memory 
overflow can occur and program will crash.


STATIC Memory allocation uses - stack memory

Dynamic Memory Allocation uses -Heap Memory Allocation  

we can creat a heap mamory using new keyword

eg:-
    new char; --------- will return address  && we can not assing any name to the variable which is with new

            ------------SO we need to creat a pointer  

    char *charecter = new char ;    -------it will copy the pointer the loication of the address


*/
#include<iostream>
using namespace std;
int getsum(int *arr,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=getsum(arr,n);
    cout<<"array ios"<<ans<<endl; 
    delete []arr;
    return 0;

}