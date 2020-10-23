
#include <iostream>

#include <ctime>
using namespace std;
int main() {
    const int basicSize=10;
    const int newSize= basicSize / 2;
int arr[basicSize];
    srand(static_cast<int>(time(0)));
    cout<<"Basic array: ";
for(int i=0; i < basicSize; i++){
    arr[i]=rand()%10+1;
    cout<<arr[i]<<' ';
}
    int i=0;
int im_helpful;
while (i < basicSize - 1){
    int j=0;
    while(j < basicSize - 1) {
        if (arr[j] >arr[j + 1]) {
            im_helpful=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=im_helpful;
        }
        j++;
    }
    i++;
}




cout<<endl<<"Sorted: ";
    for(int i=0; i < basicSize; i++){
        cout<<arr[i]<<' ';
    }

int arr2[newSize];

    for(int i=0;i<newSize;i++){
    arr2[i]=arr[2*i+1];

    }
    // int max=arr2[0],min=arr2[0];
    int summ=0;
    cout<<endl<<"New array: ";
    for(int i=0;i<newSize;i++){
        cout<<arr2[i]<<' ';
        /*  if (arr2[i]>max){
            max=arr2[i];
            }
            if (arr2[i]<min){
            min=arr2[i];
            } */
        summ=summ+arr2[i];
    }
cout<<endl<<"Min: "<<arr2[0]<<endl<<"Max: "<< arr2[newSize-1]<< endl<< "Mid: "<< float(summ)/newSize;
    return 0;


}
