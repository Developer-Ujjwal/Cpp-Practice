#include<iostream>
using namespace std;
void print(int*arr,int n)
{
    if(n==0) return;
    print(arr,n-1);
    cout<<arr[n-1]<<endl;
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    print(arr,7);
}