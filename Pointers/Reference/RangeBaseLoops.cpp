#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vect{10,20,30,40,50};
    for(int &x : vect){
        x = x+5;
    }

    for(int x: vect){
        cout<<x<<" ";
    }cout<<endl;
    return 0;
}