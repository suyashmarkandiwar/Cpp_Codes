#include <iostream>
#include <fstream>

int main(){
    ofstream out("Joker.txt");
    cout<<"Enter car name: ";
    string a;
    getline(cin, a);
    out<<"Car name is: "<<a<<endl;
    out.close();

    ifstream hin("Joker.txt");
    string c;
    getline(hin, c);
    cout<<"The content of the file is->"<<c<<endl;
    hin.close();

    return 0;
}