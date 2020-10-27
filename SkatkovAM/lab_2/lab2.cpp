
#include <iostream>

    #include <ctime>
    using namespace std;
int main() {
    const int maxValueForRand= 10;
    const int size=10;
    int arr[size];
    int arr2[size];
    srand(time(0));
    cout<<"Basic array: ";
    {
        int j = 0;
        for (int i = 0; i < size; i++) {
            arr[i] = rand() % maxValueForRand + 1;
            cout << arr[i] << ' ';
            if (arr[i] % 2) {
                arr2[j] = arr[i];
                j++;

            }else{
                arr2[j]= maxValueForRand+1; // unreal value for arr[i]  to check later
            }
        }
    }

    {
        int i = 0;
        int im_helpful;
        while (i < size - 1) {
            int j = 0;
            while (j < size - 1) {
                if (arr[j] > arr[j + 1]) {
                    im_helpful = arr[j + 1];
                    arr[j + 1] = arr[j];
                    arr[j] = im_helpful;
                }
                j++;
            }
            i++;
        }
    }



        cout<<endl<<"Sorted: ";
        for(int i=0; i < size; i++){
            cout<<arr[i]<<' ';
        }
        cout<<endl<<"New: ";
        int summ=0,max=arr2[0],min=arr2[0];
        int i=0;
        for( i;i<size;i++){
            if(arr2[i]%2 && arr2[i]!=maxValueForRand+1) {
                cout << arr2[i] << " ";
                summ += arr2[i];
                if(arr2[i]>max){
                    max=arr2[i];
                }
                if (arr2[i]<min){
                    min=arr2[i];
                }
            }else{
                break;
            }

        }
        cout<<endl<<"Min: "<<min<<endl<<"Max: "<< max<< endl<< "Mid: "<< float(summ)/(i-1);
        return 0;

}










