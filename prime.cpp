/* Program to print Prime Number */
#include <iostream>
using namespace std;
int main( ){
  int number;
  
  cout << "Enter a number : ";
  cin >> number;
  
  for(int i = 2 ; i < number ; i++)
    if(number % i == 0)
      break;
  if(i < number)
    cout <<"NOT PRIME ";
  else
    cout <<"PRIME";
  
}
