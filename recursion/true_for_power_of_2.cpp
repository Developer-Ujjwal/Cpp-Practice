#include <iostream>
using namespace std;
bool check(int a,int b)
{
    
    if(a==b)
    {
        return true;
    }
    if(a>b) { return false;}
    return check(a*2,b);

}
int main()
{
   cout<<check(1,9);
}



/*
bool check(int n)
{
    if(n==1) return true;
    if(n%2!=0) return false;
     return check(n/2);
}
*/