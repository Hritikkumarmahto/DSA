#include<iostream>
using namespace std;

void N_to_one_B(int i){
  if(i==0){
    return;
  }
  N_to_one_B(i-1);
  cout<<i;
}
int main()
{
  int i;
  cin>>i;
  N_to_one_B(i);
 return 0;
}