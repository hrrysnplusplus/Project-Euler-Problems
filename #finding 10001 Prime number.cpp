#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <vector>
using namespace std;

/*By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?

Looked up pseudocode to check if a number is prime for function isItPrime*/


bool isItPrime(bool&, int);


int main()

{

    vector <int> myvector;
    bool t=0;


    for(int j=1;j<=1000000;j++){

    //function call
    isItPrime(t,j);

        if (t==1){

            myvector.push_back(j);

        }

    }

        cout<<myvector[10000]<<endl;


    return 0;
}


bool isItPrime(bool& test, int i){


    if (i<=1){

       return test=0;

    }else if(i<=3){

        return test=1;
    }

    int j=2;
    while (j*j<=i){

        if (i%j==0){
            return test=0;

        }
        j=j+1;
    }

   return test=1;

}
