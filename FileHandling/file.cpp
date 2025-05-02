#include <iostream>
#include <fstream>

/*

The useful classes for working with files in C++ are:
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase

In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open 
a file:
1. Using the constructor
2. Using the member function of open() of the class

*/
using namespace std;
int main(){
    string st = "Luffy and Zoro";
    string st2;
    //opening files using constructor and writing it
    //ofstream out("Tom.txt");//Write operation
    //out<<st;
    
    //opening files using constructor and reading it
    ifstream in("Tom2.txt"); //Reading operation
    getline(in, st2);
    cout<<st2<<endl;

    return 0;
}