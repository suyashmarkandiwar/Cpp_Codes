#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream hout("BMW.txt");
    cout<<"Enter your car name: ";
    string name;
    getline(cin, name);
    hout<<"Car name is: "<<name;

    hout.close();

    ifstream hin("BMW.txt");
    string content;
    getline(hin, content);
    cout<<"The content of the file-> "<<content<<endl;
    hin.close();
    return 0;
}