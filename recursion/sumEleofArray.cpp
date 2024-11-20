#include<iostream>
using namespace std;
int sumElements(int* arr,int n,int idx)
{
    if(idx==n-1) return arr[idx];
    return arr[idx] +sumElements(arr,n,idx+1);
}
int main(){
    int arr[]={3,6,5,-2,7};
    cout<<sumElements(arr,5,0);
}