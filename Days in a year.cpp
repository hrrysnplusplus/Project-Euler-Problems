#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
using namespace std;

/*Each new term in the Fibonacci sequence is generated by adding the previous two terms.
By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million,
find the sum of the even-valued terms.*/




int main()

{

    int num1=1;
    int num2=2;
    int sumeven=0;
    int parameter=4000000;



    while(num1&&num2<parameter){


        if (num1%2==0){
            sumeven+=num1;
        }
        if (num2%2==0){
            sumeven+=num2;
        }


        num1+=num2;
        num2+=num1;

    }

    cout<<sumeven;


    return 0;
}
