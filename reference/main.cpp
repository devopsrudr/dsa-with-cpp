/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int a= 10;
    int &r = a;
    //r = a;...here r is a,reference of variable a
    
    int b = 95;
    r = b;//here r is not the reference of b...it is the swapping the value of b
    
    cout <<a <<endl<<r;

    return 0;
}
