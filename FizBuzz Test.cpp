#include <iostream>
using namespace std;
/*Write a program that prints the numbers from 1 to 100.
But for multiples of three print "Fizz" instead of the number
and for the multiples of five print "Buzz".  For numbers which
are multiples of both three and five print "FizzBUzz".*/


int main()

{

for (int i=1;i<=100;i++){


   if(i%3==0&&i%5==0){
    cout<<"FizzBuzz"<<endl;

   }else


   if (i%3==0){
    cout<<"Fizz"<<endl;

   }else

   if (i%5==0){
    cout<<"Buzz"<<endl;

   }else

   cout<<i<<endl;





}



return 0;
}
