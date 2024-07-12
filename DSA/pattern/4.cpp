#include <iostream>
using namespace std;

int main()
{
   int n = 13854;
   int temp = n;

   int rs = temp % 10;
   int count = temp / 10;

   int rs1 = count % 10;
   int count1 = count / 10;

   int rs2 = count1 % 10;
   int count2 = count1 / 10;

   int rs3 = count2 % 10;
   int count3 = count2 / 10;

   int rs4 = count3 % 10;
   int count4 = count3 / 10;

   int rs5 = count4 % 10;
   int count5 = count4 / 10;

   cout << rs + rs1 + rs2 + rs3 + rs4 + rs5 << endl;

   int reversed = rs * 10000 + rs1 * 1000 + rs2 * 100 + rs3 * 10 + rs4;
   cout << "Reversed number: " << reversed << endl;

   if (n >= 10 && rs == rs5 && rs1 == rs4 && rs2 == rs3)
   {
      cout << "Palindrome" << endl;
   }
   else
   {
      cout << "Not a palindrome" << endl;
   }

   return 0;
}
