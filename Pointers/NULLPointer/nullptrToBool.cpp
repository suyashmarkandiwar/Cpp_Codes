// This program compiles
#include<iostream>
using namespace std;

int main() 
{
   int *ptr = nullptr;

   // Below line compiles
   if (ptr) { cout << "true"; }    
   else { cout << "false"; }    
}
