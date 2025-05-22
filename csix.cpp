#include <iostream>
using namespace std;

class Car {
  public:
   string brand;
   void start() {
     cout << brand << "car started!" << endl;
   }
};

int main(){
    Car c1,c2;
    c1.brand = "Toyota";
    c2.brand = "Benz";
    c1.start();
    c2.start();
    return 0;
}