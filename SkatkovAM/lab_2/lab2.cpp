
#include <iostream>

#include <ctime>
using namespace std;
void basicArrayInit(int * arr, int size, int max){
    for(int i=0; i<size;i++){
        arr[i] = rand() % max+ 1;
    }
}
void oddArrayInit(const int * basic_arr,int *odd_arr, const int size, int max){
    int odd_arr_ind=0;
    odd_arr[odd_arr_ind]=max+1;//unreal value for basic_array[i]  to check later
    for(int i=0;i<size;i++){
        odd_arr[i+1 - (i==size-1)]=max+1; // weird index to not to init odd_arr[size]
        if (basic_arr[i]%2){
        odd_arr[odd_arr_ind]=basic_arr[i];
            odd_arr_ind++;

        }

    }
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
int sumOfAnyArray(const int *arr,  const int size, const int max){
    int sum=0;
    for (int i = 0; i < size;i++){
        if (arr[i] != max+1){
            sum+=arr[i];
        }
    }
    return sum;
}
int trueLengthOfAnyArray(const int *arr,const  int size,const int max){
    int length=0;
    for(int i=0;i<size;i++){
        if(arr[i] != max+1){ // != max+1 because array can be odd 
            length++;
        }
    }
    return length;
}


void printAnyArray( const int * arr,const int size, const int max) {
    for (int i = 0; i < size; i++) {
        if (arr[i] != max + 1) {
            cout << arr[i] << ' ';
        }
    }
    cout << endl;
}
int minValueOfAnyArray(const int * arr, const int size, const int max_allowed_value_for_each_element ){
    int min_value_of_array = arr[0];
    for(int i = 0; i<size;i++){
        if(arr[i]<min_value_of_array && arr[i] != max_allowed_value_for_each_element+1){
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

    basicArrayInit(basic_arr,size, maxArrValue);
    cout<<"Basic array:"<<endl;
    printAnyArray(basic_arr,size, maxArrValue);

    sortAnyArray(basic_arr,size);

    cout<<"Sorted basic array:"<<endl;
    printAnyArray(basic_arr,size, maxArrValue);

    int odd_arr[size];

    oddArrayInit(basic_arr,odd_arr,size,maxArrValue);

    cout<<"Odd array:"<<endl;
    if ( odd_arr[0] == maxArrValue+1){  // If no odd elements in basic array
        cout<<"Nothing here :)"<<endl;
        return 1;
    }
        printAnyArray(odd_arr,size,maxArrValue);
    cout<<"Mid value:\t"<<float(sumOfAnyArray(odd_arr,size,maxArrValue))/trueLengthOfAnyArray(odd_arr,size,maxArrValue)<<endl;
    cout<<"Max value: \t"<<odd_arr[0]<<endl;
    cout<<"Min value: \t"<< minValueOfAnyArray(odd_arr,size, maxArrValue)<<endl;

    return 0;


}

