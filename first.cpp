#include<iostream>
using namespace std;
int main(){
    // int a=2;
    // int b=a+1;
    // if((a=3)==b){
    //     cout<<a<<endl;
    // }
    // else
    // {
    //     cout<<a+1<<endl;
    // }
    // cout<<"Hello World";
    // char ch;
    // cout<<"Enter a number"<<endl;
    // cin>>ch;
    // if (ch>='a' && ch<='z')
    // {
    //    cout<<"The input charcter is lowercase";
    // }
    // else if(ch>='A' && ch<='Z'){
    //     cout<<"The input character is in UpperCase";
    // }
    // else if (ch>='0' && ch<='9')
    // {
    //     cout<< "The input string is Numerical";
    // }
// int i=1;
// int sum=0;
//     int n;
//     cout<<"Enter a number";
//     cin>>n;
//     while (i<=n)
//     {
//        sum+=i;
//        i++;
//     }
//     cout<<sum;

// SUm of even numbers;

// int i=2;
// int sum=0;
//     int n;
//     cout<<"Enter a number";
//     cin>>n;
//     while (i<=n)
//     {
//        sum+=i;
//        i+=2;
//     }
//     cout<<sum;

    // Given number is prime or not
    int i=2;
    int n;
    cout<<"Enter a number ";
    cin>>n;
   while (i<n)
   {

    if (n%i==0)
    {
      cout<<"The given number is not prime number";
      break;
    }
    else{
        cout<< "Yes it is Prime number";
        break;
    }
      i++;
   }
 
   

}
