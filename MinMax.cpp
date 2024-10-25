#include<iostream>
using namespace std;

int getMin(int num[],int n){
int Min=INT32_MAX;
for (int i = 0; i < n; i++)
{
    if (Min>num[i])
    {
        Min=num[i];
    }
    
}

return Min;
}

int getMax(int num[],int n){

    int Max=INT32_MIN ;

      for (int i = 0; i < n; i++)
      {
       if (num[i]>Max)
       {
        Max=num[i];
       }
       
      }
      return Max;
      
}

int main(){
    int size;
    cin>>size;
    // This is bad practice in cpp you should declare the size of an array as arr[100];
    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin>>num[i];
    }
    cout<<"Maximum value is " <<getMax(num,size);
    cout<<"Minimum value is " <<getMin(num,size);
}