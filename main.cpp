#include <iostream>
#include "homework.h"
using namespace std;

int main()
{
    int array[5] {1,2,3,4,5};
    int min1 = minElement(array, 5);
    int min2 = minElement(array, &array[4]);
    rotate(array, &array[4]);
    for (int i=0; i<5; i++)
    {
        cout<<array[i]<< " ";
    }
    cout<< endl;

    cout<<"min1 = " << min1;
    cout<< endl;
    cout<<"min2 = " << min2;
    return 0;
}
