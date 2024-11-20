#include <iostream>
using namespace std;
int sum(int number, int total)
{
    total += (number % 10);
    if (number < 10)
    {
        return total;
    }
    return sum(number / 10, total);
}
int main()
{
   cout<<sum(95, 0);
}

/*
if(number>=0&&number<=9) return number;
int dig=n%10;
return dig+sum(n/10)*/