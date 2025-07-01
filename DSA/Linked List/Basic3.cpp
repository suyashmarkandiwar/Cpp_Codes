#include <iostream>
using namespace std;

void unique(string str){
    int i,j;
    int l = str.size();

    char b;
    string str1 = "";
    for(i=0; i<l; i++){
            b = str[i];
            // cout << b <<endl;
        for(j=0; j<l; j++){
            if(b == str[j] && j != i){
                str1 += b;
                
            }
        }
    }

    cout << str1 <<endl;
}

int main(){
    string a = "yeaflggyelz";
    // cout << "Enter a string: ";
    // getline (cin, a);
    unique(a);
    return 0;
}