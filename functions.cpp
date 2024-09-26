// Fucntion to find a power b

// #include<iostream>
// using namespace std;

// int pow(int a,int b){
// int sum=1;
// for (int i = 1; i <= b; i++)
// {
//     sum*=a;
// }
// return sum;
// }

// int main(){
//     int a,b;
//     cout<<"Enter the numbers "<<endl;
//     cin>>a>>b;
//    cout<<pow(a,b)<<endl;

// }

// Function to find weather a given number is even  or odd;

// #include <iostream>
// using namespace std;
// bool isEven( int num){
//     if (num&1)
//     {
//         return 0;
//     }
//     else{
//         return 1;
//     }

// }

// int main(){

//     int a;
//     cin>>a;

//     if (isEven(a))
//     {
//         cout<<"Yes the given number is even ";
//     }
//     else{
//         cout<<"NO the given number is not Even ";
//     }

// }

// Function to find ncr;

// #include<iostream>
// using namespace std;
// int factorial(int n){
//     int fact=1;
//     for (int i = 1; i <= n; i++)
//     {
//        fact*=i;
//     }
//     return fact;

// }
// int nCr(int n,int r){
//    int num=factorial(n);
//    int den=factorial(r)*factorial(n-r);
//    int result=num/den;
//    return result;

// }

// int main(){
//     int n, r;
//     cin>>n>>r;

//     cout<<"Result is "<<nCr(n,r);

// }

// Pas by value

// #include<iostream>
// using namespace std;
// int update(int a){
//     int ans=a*a;
//     cout<<ans<<endl;
//     return ans;

// }
// int main(){
//     int a=14;
//    a= update(a);
// cout<<a;
// }

// Write a function which takes n as input and return nth term of an Airthmatic progression;

// #include <iostream>
// using namespace std;

// int ap(int n){
//     int nth=(3*n)+7;
//     cout<<nth<<endl;
//     return nth;
// }

// int main (){
//     int n;
//     cin>>n;
//    int result= ap(n);
//    cout<<"Nth term of ap is "<<result;
// }

// Write a  program to count the number of nits in given numbers;

// #include <iostream>
// using namespace std;

// int setBits(int num)
// {

//     int count = 0;
//     while (num!= 0)
//     {
//         count += num & 1;
//         num = num >> 1;
//     }
//     cout<<"value of count is "<<count<<endl;  
//           return count;
   
// }

// int setBitsOfTwoNumbers(int a,int b){
//     int totalsetbits=setBits(a)+setBits(b);
//     cout<<"value of total setbits in two numbers is "<<totalsetbits<<endl;
//     return totalsetbits;
// }

// int main()
// {
//     int a,b;
//     cin >> a>>b;
//     int result = setBitsOfTwoNumbers(a,b);
//     cout << " result is " << result;
// }

// faibonaaci serires till number n;

#include <iostream>
using namespace std;
int faibonacciSeries(int n){
        int a=0;
        int b=1;
    cout<<a<<' '<<b<<' ';
    for (int i = 1; i <=n; i++)
    { 
          
         int nextNumber=a+b;
         cout<<nextNumber<<' ';
          a=b;
        b=nextNumber;
       

    }
    
}

int main(){
    int n;
    cin>>n;
 faibonacciSeries(n);
    

}