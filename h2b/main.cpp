#include "car.h"
#include <iostream>
#include <memory>
#include <vector>
using namespace std;

int main()
{

    Car Car1;

   /* // Car
    Car1.setBrand("Bentley");
    Car1.setModel("Bentayga");
    Car1.setYear(1969);

    Car1.printData();
*/
     vector<Car> carList;

        carList.emplace_back("Toyota", "Corolla", 2021);
     carList.emplace_back("Tesla", "Model S", 2022);
         carList.emplace_back("Ford", "Mustang", 2023);

         for(int x=0; x<=2; x++) {
             carList[x].printData();
         }
    return 0;
}
