#include<iostream>
using namespace std;

int main(){


    // Sum of natural numbers 
    // int n;
    // cout<<"Enter a number ";
    // cin>>n;
    // int sum=0;
    // for (int  i = 1; i <=n; i++)
    // {
             
    //     sum+=i;
    //  }
    //  cout<<"Sum is  "<<sum;



    // Print fabonacci series

    //  int n;
    // cout<<"Enter a number ";
    // cin>>n;
    // int a=0;
    // int b=1;
    // cout<<a<<" "<<b<<" ";
    // for (int  i = 1; i <=n; i++)
    // {

    //     int nextNumber=a+b;
    //          cout<<nextNumber<<" ";
    //          a=b;
    //          b=nextNumber;
       
    //  }
     
    //  WAP to check weather the number is prime or note using for loop;

//     int n;
//     cout<<"Enter the number ";
//     cin>>n;
     
//      if (n==0||n==1){
//         cout<<"No"<<n<<" is not Prime number";
//      }
     
// bool isPrime=1;

//      if (n==2)
//        {
//             cout<<"Yes "<<n<<" is Prime number";
//        }

//     for (int  i = 2; i < n; i++)
//     {   
//       if (n%i==0)
//         {
//             isPrime=0;
//            break;   
//         }
//     }
    
//      if (isPrime==0)
//         {
//             cout<<"No "<<n<<" is not Prime";
//         }
//         else{
//            cout<<"Yes "<<n<<" is Prime number";
//         }


// practicing contniue;

// for (int i = 1; i <=5; i++)
// {
//     cout<<"Hii"<<endl;
//         cout<<"Ram ram ji"<<endl;

//     cout<<"Hlo"<<endl;

//     cout<<"Namstey"<<endl;
//       continue;
//     cout<<"Slam";

// }

// Practice questions

// 1

// for (int i = 0; i < 5; i++)
// {
//     cout<<i<< " ";
//     i++;
// }

// #2

// for (int i = 0; i < 5; i--)
// {
//     cout<<i<< " ";
//     i++;
// }

// #3

// for (int i = 0; i <=15; i+=2)
// {
//    cout<<i<<" ";
//    if (i&1)
//    {
//     continue;
//       }
//       i++;
   
// }

// #4

for (int i = 0; i < 5; i++)
{
  for (int j = i; j <=5; j++)
  {
    cout<<i<<" "<<j<<endl;
    
  
}


// #5

for (int i = 0; i < 5; i++)
{
  for (int j = i; j <=5; j++)
  {

    if (i+j==10)
    {
      break;
    }
    
 cout<<i<<" "<<j<<endl;
  }
  
}








}