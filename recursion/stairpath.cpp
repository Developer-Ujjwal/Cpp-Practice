#include<iostream>
using namespace std;
int ways(int stairs)
{
    if(stairs==2) return 2;
    if(stairs==1) return 1;
    int totalways=ways(stairs-1)+ways(stairs-2);
    return totalways;
}

int main(){
    cout<<ways(4);
    return 0;
}