#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
using namespace std;


//Write a method calculating the sum of an array using recursion.
int sumArray(int arry[],int n){


    if (n==0){
        return arry[n];
    }
    else return (arry[n]+sumArray(arry[n],n-1));



}



int main()

{

    int arry[5]={2,3,4,5,6};
    int sum=0;

    sum=sumArray(arry,5-1);

    cout<<sum;

    return 0;
}













