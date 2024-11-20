#include<iostream>
using namespace std;
int search(int* arr,int idx,int n,int x) 
{
    if(idx==n)
    {
        return -1;
    }
    if(arr[idx]==x)
    {
        return idx;
    }
    return search(arr,idx+1,n,x);

}
int main(){
    int arr[]={-1,-2,-3,5};
   cout<< search(arr,0,4,5);
}