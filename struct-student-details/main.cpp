/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <stdio.h>
using namespace std;

struct student
{
    int roll;
    char name[25];
    char sec;
    char address[50];
};

int main()
{
    student students[4];
    
    //initialise the struct
    students[0] = {1,"alice",'A',"India"};
    students[1] = {1,"alice",'A',"India"};
    students[2] = {1,"alice",'A',"India"};
    students[3] = {1,"alice",'A',"India"};
    
    for(int i=0;i<4;i++){
        cout<<"student "<<i+1<<endl;
        cout<<"roll "<<students[i].roll<<endl;
        cout<<"name "<<students[i].name<<endl;
        cout<<"sec "<<students[i].sec<<endl;
        cout<<"address "<<students[i].address<<endl
        ;
    }
    
    
    
    

    

    return 0;
}