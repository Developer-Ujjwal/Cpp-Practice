#include<iostream>
#include<string>
using namespace std;
class book
{
public:
    string name;
    int price;
    int numberofpages;
   int countBooks(int p)
{
if (price<p)
return 1;
else return 0;
}
bool isBookPresent(string title){
    if(name==title)
    {
        return true;
    }
    else return false;
}
};


int main(){
book harrypotter;
book hobbit;
harrypotter.name='h';
harrypotter.price=249;
harrypotter.numberofpages=300;
int a=150;
cout<<harrypotter.countBooks(500);
cout<<harrypotter.isBookPresent("horror");

}