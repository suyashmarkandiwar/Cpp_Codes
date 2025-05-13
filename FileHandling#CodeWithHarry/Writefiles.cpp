#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream out;
    out.open("Cat.txt");
    out<<"Its the cat not dog"<<endl;
    out<<"Its tommy";
    out.close();

    ifstream in;
    string st, st2;
    in.open("Cat.txt");
    // getline(in, st);
    // getline(in, st2);
    // cout<<st<<endl;
    // cout<<st2<<endl;
    
    while(in.eof()==0){ //eof-> EndOfFile
        getline(in, st);
        cout<<st<<endl;
    }

    in.close();
    return 0;
}