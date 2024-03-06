/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <stdio.h>
#include <stdlib.h> //for pointer to an array present in heap memory
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    //array in main memory
    //int A[5] = {10,12,8,5,7};
    //int *p;
    //p = A;
    
    //printf("%d",p);
    
    //array in heap using c:
    //int *p;
    //p =(int *)malloc(5*sizeof(int));//malloc *******imp
    //p[0]=10; p[1]= 2; p[2]= 12; p[3]=15;p[4]=8;
    
    //for(int i=0;i<5;i++){
    //    cout<<p[i]<<endl;
    //}
    
    
    
    
    //array in heap using cpp
    //int *p;
    //p=new int[5];
    //p[0]=10; p[1]= 2; p[2]= 12; p[3]=15;p[4]=8;
    
    //for(int i =0;i<5;i++){
    //    cout<<p[i]<<endl;
    //}
    
    //delete [ ]p;
    //free(p);.....for c lang
    
    struct rectangle *p1;
    int *p2;
    char *p3;
    bool *p4;
    
    cout << sizeof(p1)<<endl;
    cout << sizeof(p2)<<endl;
    cout << sizeof(p3)<<endl;
    cout << sizeof(p4)<<endl;
    
    
    

    return 0;
}