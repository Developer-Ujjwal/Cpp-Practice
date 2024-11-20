#include<iostream>
using namespace std;
int minValue(int* arr,int n,int min)
{
    if(n==-1)
    {
        return min;
    }
    if(arr[n-1]<min)
    {
        min=arr[n-1];
    }
    return minValue(arr,n-1,min);
}
int main(){
    int arr[]={5,2,6,7,3};
cout<<minValue(arr,5,INT_MAX);
}