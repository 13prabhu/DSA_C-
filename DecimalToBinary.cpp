// // Convert a number from Decimal to binary 

// This below method is error prone so use second method instead of this;



// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter a number ";
// cin>>n;
// int ans =0;
// int i =0;

// while (n!=0)
// {
//     int bit=n&1;
//     ans=(bit*pow(10,i))+ans;
//     n=n>>1;
//     i++;

    
// }
// cout<<"Binary of given number is "<<ans;
// }


// Second method 
// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter a number";
// cin>>n;
// int i=1;
// int ans=0;
// while (n!=0)
// {
//    int bit=n&1;
//    ans=(bit*i)+ans;
//    n=n>>1;
//    i=i*10;

// }
// cout<<"Binary value of given integer is "<<ans;

// }

// Converting a negative number to binary number

#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n;
cout<<"Enter a number";
cin>>n;
int i=0;
int ans=0;
if (n<0)
{
    n=pow(2,16)+n;
}
cout<<n<<endl;
while (n)
{
    int lastBit=n&1;
    ans=(pow(10,i)*lastBit)*ans;
    n=n>>1;
    i++;
    cout<<ans<<endl;

}
cout<<ans<<endl;
return 0;
 }




