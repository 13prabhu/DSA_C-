# include<iostream>
 using namespace std;
// Array with functions 
void PrintArray(int arr[],int size){

 cout<<"Printing the Array"<<endl;
     for (int i = 0; i < size; i++){
    cout<<arr[i]<<' ';
}
 cout<<"Printing done"<<endl;

}
int main (){

// int first[15]={2,3};
// int first[]={4,5,6,7,8,9,4,4,5,6,67,7,4,3,22,5,6,7,55,3,3,4,5,6,78,9,7,76,6,5,4};
// int firstArrySize=sizeof(first)/sizeof(int);
// cout<<"FirstArry "<<firstArrySize;
// int n=2;
// PrintArray(first,n);

int second[5]={2,3,4};
int n=3;
PrintArray(second,n);




}