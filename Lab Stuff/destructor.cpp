#include <iostream>
using namespace std;
class Marks{
public:
   int maths;
   int science;
   //constructor
   Marks() {
      cout << "Inside Constructor"<<endl;
      cout << "C++ Object created"<<endl;
   }
  //Destructor
   ~Marks() {
      cout << "Inside Destructor"<<endl;
      cout << "C++ Object destructed"<<endl;
   }
};
int main( )
{
   Marks m1;
   Marks m2;
   return 0;
}
