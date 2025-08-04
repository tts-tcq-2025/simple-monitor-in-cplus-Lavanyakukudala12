#include <assert.h>
#include <iostream>
using namespace std;
bool isValueIsWithinTheRange(float value, float minValue,float maxValue){
    if (value < minValue || value > maxValue) {
      return true;
    }
  return false;
}
/*
bool isTemperatureOk(float temperature) {
  if () {
    cout << "Temperature out of range!\n";
    return false;
  }
  return true;
}

bool isSocOk(float soc) {
  if (soc < 20 || soc > 80) {
    cout << "State of Charge out of range!\n";
    return false;
  }
  return true;
}
*/

bool isChargeRateOk(float chargeRate) {
  if (chargeRate > 0.8) {
    cout << "Charge Rate out of range!\n";
    return false;
  }
  return true;
}

bool batteryIsOk(float temperature, float soc, float chargeRate) {
  return isValueIsWithinTheRange(temperature,0,45) &&
         isValueIsWithinTheRange(soc,20,80) &&
         isChargeRateOk(chargeRate);
}

int main() {
  assert(batteryIsOk(25, 70, 0.7) == true);
  assert(batteryIsOk(50, 85, 0) == false);
}
