#include <iostream>
using namespace std;

int main()
{
    //FizzBuzz with gender
    int i;
    for (i = 0; i < 101; i++) {
      if (i % 15 == 0) {
        cout << "FizzBuzz" << "\n";
        if (i % 2 == 0) {
          cout << "FizzBuzza" << "\n";
        }
        else if (i % 2 != 0) {
          cout << "FizzBuzzo" << "\n";
        }
      }
      else if (i % 3 == 0) {
        cout << "Fizz" << "\n";
        if (i % 2 == 0) {
          cout << "Fizza" << "\n";
        }
        else if (i % 2 != 0) {
          cout << "Fizzo" << "\n";
        }
      }
      else if (i % 5 == 0) {
        cout << "Buzz" << "\n";
        if (i % 2 == 0) {
          cout << "Buzza" << "\n";
        }
        else if (i % 2 != 0) {
          cout << "Buzzo" << "\n";
        }
      }
      else if (i % 7 == 0) {
        cout << "Bazz" << "\n";
        if (i % 2 == 0) {
          cout << "Bazza" << "\n";
        }
        else if (i % 2 != 0) {
          cout << "Bazzo" << "\n";
        }
      }
      else {
        if (i % 2 == 0) {
          cout << "Jill-chan" << "\n";
        }
        else if (i % 2 != 0) {
          cout << "Jack-kun" << "\n";
        }
      }
    }
}

/* Feel free to point out any bugs that I didn't catch! */
