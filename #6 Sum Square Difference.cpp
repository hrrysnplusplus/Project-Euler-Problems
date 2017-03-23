#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <vector>
using namespace std;

/*The sum of the squares of the first ten natural numbers is,

1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)^2 = 55^2 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.*/

int main(){

    double sumsquare=0;
    double sum=0;
    double squaresum=0;
    double difference=0;

    //sum of the square
    for(double i=1;i<=100;i++){

        sumsquare+=pow(i,2.0);
    }

    //finding sum of 1-100
    for(double i=1;i<=100;i++){

        sum+=i;
    }

    squaresum=pow(sum,2.0);

    //sum/square difference
    difference=squaresum-sumsquare;

    cout<<fixed<<difference;


    return 0;
}
