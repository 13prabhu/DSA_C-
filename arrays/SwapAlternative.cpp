// #include <iostream>
// using namespace std;

// void printArray(int arr[],int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
    
// }

// void swapAlternative(int arr[],int size){
//     for (int i = 0; i < size; i+=2)
//     {
//         int temp;
//        if (i+1<size)
//        {
//         // swap(arr[i],arr[i+1]);
//           temp=arr[i+1];
//            arr[i+1]=arr[i];
//            arr[i]=temp;
//        }   
//     }
// }
// int main(){
//     int arr[8]={2,5,8,3,56,23,45,11};
//     int arr2[5]={33,56,23,78,3};
//      swapAlternative(arr,8);
//      printArray(arr,8);
//       swapAlternative(arr2,5);
//      printArray(arr2,5);
// }



// Repeating above programme

#include <iostream>
using namespace std;

void swapArray(int array[],int n){
  for (int i = 0; i < n; i+=2)
  {
    int temp;
    
    if (i+1<n)
    {
        temp=array[i+1];
        array[i+1]=array[i];
        array[i]=temp;
    }
    
  }
  
}

void printArray(int array[],int size){
          for (int i = 0; i < size; i++)
          {
            cout<<array[i];
            cout<<" ";
          }      
          cout<<endl;
}


int main(){
    int arr[5]={3,5,23,54,6};
    int arr2[8]={34,56,78,90,12,4,45,33};

    swapArray(arr,5);
    printArray(arr,5);
    swapArray(arr2,8);
    printArray(arr2,8);
 
}