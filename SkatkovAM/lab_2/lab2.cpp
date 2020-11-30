#include <iostream>
#include <ctime>
using namespace std;
void basicArrayInit(int * arr, int size, int max){
    for(int i=0; i<size;i++){
        arr[i] = rand() % max+ 1;
    }
}


void oddArrayInit(const int * basic_arr,int *odd_arr, const int basic_size, int & odd_size){
    int odd_arr_ind=0;
    for(int i = 0; i<basic_size; i++){
        if(basic_arr[i]%2){
            odd_arr[odd_arr_ind]=basic_arr[i];
            odd_arr_ind++;
        }
    }
    odd_size=odd_arr_ind;
}


void sortAnyArray(int * arr,const int size){  //bubbly
    int im_helpful;
    for(int j=0;j<size;j++) {
        for (int i = 0; i < size-1; i++) {
            if(arr[i]<arr[i+1]){
                im_helpful=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=im_helpful;
            }
        }
    }
}


int sumOfAnyArray(const int *arr,  const int size){
    int sum=0;
    for (int i = 0; i < size;i++){
            sum+=arr[i];
    }
    return sum;
}


void printAnyArray( const int * arr,const int size) {
    for (int i = 0; i < size; i++) {
            cout << arr[i] << ' ';

    }
    cout << endl;
}


int minValueOfAnyArray(const int * arr, const int size ){
    int min_value_of_array = arr[0];
    for(int i = 0; i<size;i++){
        if(arr[i]<min_value_of_array){
            min_value_of_array=arr[i];
        }
    }
    return  min_value_of_array;
}


int main() {
    const int maxArrValue= 10;
    const int size=10;
    srand(time(0));
    int basic_arr[size];
    basicArrayInit(basic_arr,size,maxArrValue);
    cout<<"Basic array:"<<endl;
    printAnyArray(basic_arr,size);
    sortAnyArray(basic_arr,size);
    cout<<"Sorted basic array:"<<endl;
    printAnyArray(basic_arr,size);
    int odd_arr[size];
    int odd_arr_size=0;
    oddArrayInit(basic_arr,odd_arr,size,odd_arr_size);
    cout<<"Odd array:"<<endl;
    if ( odd_arr_size==0){  // If no odd elements in basic array
        cout<<"Nothing here :)"<<endl;
        return 1;
    }
    printAnyArray(odd_arr,odd_arr_size);
    cout<<"Mid value:\t"<<float(sumOfAnyArray(odd_arr,odd_arr_size))/odd_arr_size<<endl;
    cout<<"Max value: \t"<<odd_arr[0]<<endl;
    cout<<"Min value: \t"<< minValueOfAnyArray(odd_arr,odd_arr_size)<<endl;
    return 0;
}
