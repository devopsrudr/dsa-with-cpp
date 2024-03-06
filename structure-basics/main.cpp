/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <stdio.h>
using namespace std;

struct Rectangle
{
  int length;
  int breadth;
  //char x; ....it generally use 1 bytes but here it will be allocating 4 bytes for the ease of machine
};								//r1,r2,r3,r4.....global variable;

//struct Rectangle r1,r2,r3,r4;....its also global variable

int
main ()
{
  struct Rectangle r1 = { 10, 5 };
  r1.length = 10;
  r1.breadth = 15;

  //cout<< sizeof(r1)<<endl;
  cout << "Area of rectangle: " << r1.length * r1.breadth;


  return 0;
}





