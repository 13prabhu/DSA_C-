#include<iostream>
using namespace std;

int main(){

// Smaleest Number in an array


    // int size;
    // cin>>size;
    // int nums[size];
    // for (int i = 0; i < size; i++)
    // {
    //     cin>>nums[i];

    // }
    // int smallest=INT32_MAX;

    // for (int i = 0; i < size; i++)
    // {
    //     if (nums[i]<smallest)
    //     {
    //         smallest=nums[i];
    //     }
        
    // }
    // cout<<endl;
    // cout<<"Smallest number is :"<<smallest;
    
    // Larget number in an array


    // int size;
    // cout<< "Enter the size  of array" <<endl;
    // cin>>size;
    // int nums[size];
    // for (int i = 0; i < size; i++)
    // {
    //     cin>>nums[i];

    // }
    // int Largest=INT32_MIN;

    // for (int i = 0; i < size; i++)
    // {
    //     if (nums[i]>Largest)
    //     {
    //         Largest=nums[i];
    //     }
        
    // }
    // cout<<endl;
    // cout<<"Largest number is :"<<Largest;



// How to find both in an single Function

 
    // int size;
    // cout<< "Enter the size  of array" <<endl;
    // cin>>size;
    // int nums[size];
    // for (int i = 0; i < size; i++)
    // {
    //     cin>>nums[i];

    // }
    // int smallest=INT32_MAX;
    // int Largest=INT32_MIN;

    // for (int i = 0; i < size; i++)
    // {
    //    smallest=min(nums[i],smallest);
    //    Largest=max(nums[i],Largest);
        
    // }
    
    // cout<<endl;
    //  cout<<"Smallest number is :"<<smallest;
    //  cout<<endl;
    // cout<<"Largest number is :"<<Largest;


    // Finding Index of an number in an array


    // int nums[]={1,4,7,8,9,6,5};
    // int size=sizeof(nums)/sizeof(nums[0]);
    // int target=8;



    int size;
    cout<< "Enter the size  of array" <<endl;
    cin>>size;
    int nums[size];
   
    for (int i = 0; i < size; i++)
    {
        cin>>nums[i];

    }
    int smallest=INT32_MAX; 
     int index=-1;

     for (int i = 0; i < size; i++)
    {
       smallest=min(nums[i],smallest);
    }
// cout<<"Smallest Number is "<<smallest;
    
    for (int i = 0; i < size; i++)
    {
        if (nums[i]==smallest)
        {
           index=i;
        //    cout<<"Index number "<<index<<endl;
           break;
        }
        
    }

    if (index!=-1)
    {
       cout<<"Number found at index "<<index<<endl;
    }
    else{
        cout<<"Number not found in array";
    }
    

}