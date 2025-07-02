#include <iostream>
using namespace std;

void unique(string str, int k){
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

    
    for(i=0; i<str1.size(); i++){
        char c = str1[i];
        int t=1;
        for(j=0; j<str1.size(); j++){
            if(c == str1[j] && j != i){
                str1[j] = 0;
                t++;
                
            }
           
        }
         
        if(t == k){
           
                cout << "First letter to repeat " << k << " times: " << str1[i] << endl;
            // char c = str1[i];
            // cout << c << endl;
        }
        

        
    }
    
    
    cout << str1 <<endl;
}

int main(){
    string a = "zyeaflgggyz";
    int n = 2;
    // cout << "Enter a string: ";
    // getline (cin, a);
    unique(a, n);
    return 0;
}