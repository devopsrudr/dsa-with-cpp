/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int
main ()
{
  int n;
  cout << "Enter the size: ";
  cin >> n;
  int A[n];
  A[0] = 2;

  //for(int i = 0; i < 10;i++){
  //   cout<<A[i] << endl;
  //}

for (int x:A)
	{
	  cout << x << endl;		//for each loop
	}


  return 0;
}
