#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int num;
   int sum = 0;
   int count = 0;
   int maxNum = 0;

   cout << fixed << setprecision(2); // Set precision for all floats

   while (true) {
      cin >> num;

      if (num < 0) {
         break;
      }

      // Update max and sum
      if (count == 0 || num > maxNum) {
         maxNum = num;
      }

      sum += num;
      count++;
   }

   double average = static_cast<double>(sum) / count;

   cout << maxNum << " " << average << endl;

   return 0;
}
