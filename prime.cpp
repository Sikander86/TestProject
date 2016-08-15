/* Program to print Prime Number */
#include <iostream>
using namespace std;
int main( ){
  int number;
  
  cout << "Enter a number : ";
  cin >> number;
  
  bool flag = true;
  for(int i = 2 ; i < number ; i++)
    if(number % i == 0){
      flag = false;
      break;
    }
  if(flag == false)
    cout <<"NOT PRIME ";
  else
    cout <<"PRIME";
  
}
