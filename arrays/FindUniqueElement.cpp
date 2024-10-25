#include <iostream>
using namespace std;
int findUnique(int arr[],int size){
    int ans=0;
for (int i = 0; i < size; i++)
{
    ans=ans^arr[i];
    
}
return ans;

}

int main(){
int array_1[7]={2,1,2,4,3,4,3};
cout<<findUnique(array_1,7);
}