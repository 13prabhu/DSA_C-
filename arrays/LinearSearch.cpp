#include<iostream>
using namespace std;
 bool search(int arr[],int n,int key){
for (int  i = 0; i < n; i++)
{
    if (arr[i]==key)
    {
        return 1;
    }
    
}
return 0;
}

int main(){
    int arr[10]={1,3,4,6,7,3,4,68,-2,16};
    int key;
    cin>>key;
    bool found=search(arr,10,key);
    if (found)
    {
       cout<<"Element Found "<<endl;
    }
    else{
        cout<<"Element not found "<<endl;
    }
    
}