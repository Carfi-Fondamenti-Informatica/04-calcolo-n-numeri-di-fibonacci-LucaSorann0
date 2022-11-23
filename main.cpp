#include <iostream>
using namespace std;

int fibonacci (int n) {
   if (n<2) {
      cout << "errore" << endl;
   } else {
      int a = 0, b = 1, c = 0;
      cout << a + b << endl;
      for (int i=1; i<n; i++){
         c = a + b;
         cout << c << endl;
         a = b;
         b = c;
      }}
   return n;
}

int main() {
   int n = 0;
      cin >> n;
   fibonacci (n);
   return 0;
}
