#include <iostream>
using namespace std;
//Find the duplicate value in an array


int main()

{
    int arrLength=6;

    int myArr[arrLength]={3,2,3,4,5,5};


    for (int i = 0; i < arrLength - 1; i++)
{

        // cout << myArr[i] << '\n';
        for (int j = i + 1;j < arrLength; j++)
  {
            // cout << '\t' << myArr[j] << '\n';

            if (myArr[i] == myArr[j]) // then this is a duplicate

                {
                    cout<<myArr[i]<<" ";
                }




}


}

}



