#include <stdio.h>
#include <iostream>
using namespace std;


int degree_of_number(int num, int degree){
    int res = 1;
    for(int i =0; i<degree; i++){
        res=res*num;
    }
    return res;
}

int factorial(int num){
    long long int res = 1;
    for(int i =2; i<(num+1); i++){
        res=res*i;
    }
    return res;
}

double square_root(double num){
    double left = 0;//левая граница
    double right = 9999999; //правая граница
    double mid;//середина
    double p = 0.000001;//точность вычислений

    while (right - left > p){ 
        mid = left + (right - left)/2;//ищем середину
        if (mid*mid > num) {
            right = mid;
        }
        else 
            left = mid; 
        }
    return left+p;         
}

bool check_composite(int num){
    double kor=square_root(num);//корень искомого числа
    int i = 2;//делитель
    bool compos = false;//проверка составное ли число

    while ((i<=kor)&&(compos==false)){
        if(num % i == 0){
            compos=true;
        }
        else {
            i++;
        }
    }
    return compos;
}

int main()
{
    int  degree;
    long double result;
    double number;
    bool composite;

    cout << "Enter number:";
    cin >> number;
    cout << "Enter degree of number:";
    cin >> degree;

    result=degree_of_number(number, degree);
    cout<< number << "^" << degree << " = " << result<<endl;

    result=factorial(number);
    cout<< number << "!" << " = " << result<<endl;

    result=square_root(number);
    cout<< "sqrt(" << number << ")" << " = " << result<<endl;

    composite=check_composite(number);
    cout<< "Is it a simple number?"<<endl;;
    if(composite == true){
        cout << "No" << endl;
    }
    else if(composite == false) {
        cout << "Yes" << endl;
    }

    system("pause");
	return 0;
    }