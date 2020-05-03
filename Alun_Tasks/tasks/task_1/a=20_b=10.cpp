#include <iostream>
#include <windows.h>
using namespace std;

int main () {

int a = 10;
int b = 20;
int temp;

cout << "a = " << a << " B = " << b << "\n\n";
temp =a;
a = b;
b = temp;
cout << "a = " << a << " b = " << b << "\n\n";

/*left this in as this task was just copying someone else's code however
there are better alternatives to making the compiled program finish without closing*/
system ("pause");

}
