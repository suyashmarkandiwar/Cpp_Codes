#include <iostream>
#include <string>
using namespace std;
class BankAccount{
    private:
    string User;
    int ID;
    int Balance = 9000;
    
    public:
    void setValues(string User, int ID){
        this->User = User;
        this->ID = ID;
        cout<<"User: "<<User<<endl;
        cout<<"ID: "<<ID<<endl;
        
    }

    void Deposit(){
        int deposit;
        cout<<"Enter Deposit Amount: $";
        cin>>deposit;
        Balance+=deposit;
        cout<<"Balance: $"<<Balance<<endl;
    }

    void Withdraw(){
        int withdraw;
        cout<<"Enter Withdrawal Amount: $";
        cin>>withdraw;
        if(withdraw<=Balance && withdraw>0){
        Balance-=withdraw;
        cout<<"Balance: $"<<Balance<<endl;
        }
        else{
        cout<<"Not enough money in Account"<<endl;
        }
    }

    void checkBalance(){
        cout<<"User: "<<User<<endl;
        cout<<"ID: "<<ID<<endl;
        cout<<"Balance: $"<<Balance<<endl;
    }

};

int main(){
    int x;
    cout<<"To Enter BankAccount press 1 and 0 to exit: ";
    cin>>x;
    BankAccount b1;
    while(x==1){
    string a;
    cout<<"Enter UserName: ";
    cin.ignore();
    getline(cin, a);
    int b;
    cout<<"Enter ID: ";
    cin>>b;
    b1.setValues(a, b);
    int c;
    cout<<"Enter 1 to deposit and 0 to withdraw and 2 to checkBalance: ";
    cin>>c;
    if(c==1){
        b1.Deposit();
    }
    else if(c==0){
        b1.Withdraw();
    }
    else if(c==2){
        b1.checkBalance();
    }
    else{
        cout<<"Invalid Input"<<endl;
        }
        
    cout<<"Press 1 to continue and 0 to exit Account: ";
    cin>>x;
    }

    cout<<"******You Successfully Exited The Bank******"<<endl;
    return 0;
}