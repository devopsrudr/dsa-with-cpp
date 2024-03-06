/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <stdio.h>
using namespace std;
//programme can access only coding part and stack part of memory.heap memory can not accesed by programme directly.
//pointer is used to  access heap memory,passing parameters,acessing external resources(file type,mouse,keyboard,monitor).


int
main ()
{
  int *p; //declaring pointer
  p = new int[5]; // this is for cpp
  // p = (int *)malloc(5*sizeof(int)); //this is for c
  
  cout << p;

  return 0;
}
