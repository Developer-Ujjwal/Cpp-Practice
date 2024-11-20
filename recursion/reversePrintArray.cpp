#include<iostream>
using namespace std;
void reversePrint(int* arr,int idx,int n) 
{
    if(idx==n) return;
    reversePrint(arr,idx+1,n);
    cout<<arr[idx];

}
int main(){
    int arr[]={-1,-2,-3,5};
   reversePrint(arr,0,4);
}