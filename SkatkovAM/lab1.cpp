#include <iostream>
#include <limits>
using namespace std;
float a,b;
int onOffInd,inputInd=1; //ind:0=right input; 1= wrong input; on
char operation;
void hello(){
    cout<<"Hello. im calculator ^_^"<<endl;
}

void onOffCheck(){
    if(a==0 && b==0 && operation=='0'){
        onOffInd=1;
    }
}

void inputAndCheck(){
    a=0;
    b=0;
    operation='=';
    inputInd=1;
    while(inputInd==1) {
        cout << "Type A B and operation to do. Type 0 0 0 to Off me" << endl;
        while (inputInd == 1) {
            if (!(cin >> a >> b >> operation)) {
                cout << "Wrong input. Try again." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                inputInd = 1;
            } else {
                inputInd = 0;
            }
        }
            if (!(operation == '-' || operation == '+' || operation == '*' || operation == '/' || operation=='0') && inputInd == 0) {
                cout<<"Wrong input! Try again"<<endl;
                inputInd = 1;
            }else{
                inputInd=0;
            }


            if (operation == '/' && b == 0 && inputInd == 0) {
                cout << "Wrong input. You can't do division by zero. Try again" << endl;
                inputInd = 1;
            }else{
                inputInd=0;
            }

        onOffCheck();
        if(onOffInd==0 && operation=='0'){
            inputInd=1;
        }
    }
}


void calculate(){
    switch(operation){

        case '-' : cout<<a<<operation<<b<<"="<<a-b<<endl;
        case '+' : cout<<a<<operation<<b<<"="<<a+b<<endl;
        case '*' : cout<<a<<operation<<b<<"="<<a*b<<endl;
        case '/' : cout<<a<<operation<<b<<"="<<a/b<<endl;
        default: ;
    }
}


int main() {
hello();
while(onOffInd==0) {

    inputAndCheck();

    calculate();
}
cout<<"Have a nice day! cya ^_^"<<endl;
return 0;
}
