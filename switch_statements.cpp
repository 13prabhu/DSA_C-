#include<iostream>
using namespace std;

int main (){
    // int a,b;
    // cout<<"Enter a "<<endl;
    // cin>>a;
    // cout<<"Enter b "<<endl;
    // cin>>b;

    // char op;
    // cout<<"Enter a operation you want to perform "<<endl;
    // cin>>op;

    // switch (op)
    // {
    // case '+': cout<<(a+b);
    //           break;
    // case '-':cout<<(a-b);
    //           break;
    // case '*':cout<<(a*b);
    //          break;
    // case '/':cout<<(a/b);
    //          break;
    // case '%': cout<<(a%b);
    //          break;
    // default:  cout<<"Please enter a valid Operation";
    // }

    

//Number of 100,50,20,10 rs notes in an amount;

int amount;
cout<<"Enter a amount ";
cin>>amount;

int note_100,note_50,note_20,note_10;
while (amount>=0)
{
 int noteFace;
cout<<"Enter the note face value ";
cin>>noteFace;

switch (noteFace)
{
case 100: 
      note_100=amount/100;
      cout<<note_100<<endl;
     
    break;
case 50: 
      note_50=amount/50;
      
    break;
case 20: 
      note_20=amount/20;
       
    break;
case 10: 
      note_10=amount/10;
       
    break;

default: cout<<"Invalid Note value";
    break;
}
 amount=amount-(note_100*100||note_50*50||note_20*20||note_10*10);
//   amount=amount-note_50*50;
//  amount=amount-note_20*20;
//  amount=amount-note_10*10;
 cout<<amount<<endl;

// cout<<"100 rs notes"<<note_100<<"50 rs notes "<<note_50<<"20 rs notes "<< note_20<<"10 rs notes"<<note_10;
}

}


