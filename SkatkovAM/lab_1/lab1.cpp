#include <iostream>
#include <limits>
using namespace std;
//ind:0=right input; 1= wrong input; o
void hello(){
    cout<<"Hello. im calculator ^_^"<<endl;
}

bool onOffCheck(float numb1, float numb2, char operation){
    if(numb1==0 && numb2==0 && operation=='0'){
        return true;
    }else{
        return false;
    }
}

float numb1Input(){
    float numb1=0;
    cout<<"Input A"<<endl;
    if(cin>>numb1){
        return numb1;
    }
    cout<<"Wrong input"<<endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    numb1Input();

}
float numb2Input(){
    float numb2=0;
    cout<<"Input B"<<endl;
    if(cin>>numb2){
        return numb2;
    }
    cout<<"Wrong input"<<endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    numb2Input();
}
bool operationInputCheck(char operation){
    if(operation=='-' || operation=='+' || operation=='*' || operation=='/' || operation=='0'  ) {

        return true;

    }
    return false;
}
char operationInput(){
    char operation;
    cout<<"Input operation symbol"<<endl;
    if(cin>>operation && operationInputCheck(operation)){
        return operation;
    }
    cout<<"Wrong input"<<endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    operationInput();
}
bool divisionsByZeroCheck(float numb1, float numb2, char operation){
    if(operation=='/' && numb2==0){
        return false;
    }
    return true;
}
void calculate(float numb1, float numb2, char operation){
    switch(operation){

        case '-' : cout<<numb1<<operation<<numb2<<"="<<numb1-numb2<<endl;break;
        case '+' : cout<<numb1<<operation<<numb2<<"="<<numb1+numb2<<endl;break;
        case '*' : cout<<numb1<<operation<<numb2<<"="<<numb1*numb2<<endl;break;
        case '/' : cout<<numb1<<operation<<numb2<<"="<<numb1/numb2<<endl;break;
        default: ;
    }
}


int main() {
    char operation;
    float numb1,numb2;
    hello();
    do {
        cout << "Type 0 for 3 times to switch me off ^_^" << endl;
        numb1 = numb1Input();
        numb2 = numb2Input();
        operation = operationInput();
        if (divisionsByZeroCheck(numb1, numb2, operation)){
            if (onOffCheck(numb1, numb2, operation)) {
                cout << "Have a nice day! cya ^_^" << endl;
                return 0;
            }
        if (operation != '0') {
            calculate(numb1, numb2, operation);
        } else {
            cout << "Wrong input" << endl;
        }
    }else{
            cout<<"I cant do division by zero, sorry :("<<endl;
        }



    }while(!onOffCheck(numb1, numb2, operation));

}
