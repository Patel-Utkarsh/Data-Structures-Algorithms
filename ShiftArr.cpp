#include <iostream>
using namespace std;

int main() {
    int arr[8] = {2,5,1,3,7,1,4,6};
    int temp;
  
    
   int size = sizeof(arr)/sizeof(arr[0]);
   int k =  1;

   for(int i = size/2 ; i<size-1; i++) {
        temp = arr[i];
        int j=i;
        for(; j>k ; j--) {
            arr[j] = arr[j-1];
            
        }

        arr[j] = temp;
        k+=2;
   }

    for(int i = 0 ; i<size; i++) {
        cout<<arr[i]<<endl;
    }
}
