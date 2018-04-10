#include <math.h>

// This definition declares an expected input from import.
// Note: if it is not used then no import will be required.
void consoleLog (float num);

float getSqrt (float num) {
  consoleLog(num);
  return sqrt(num);
}
