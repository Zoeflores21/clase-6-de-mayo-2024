#include <iostream>
using namespace std;
int main(){

 int x, n, y;
   cout << "ingrese un numero positivo" ;
   cin >> x;
   n = 1;
   
   while (n <= 11){

    y = n * x;
    cout << n << "x" << x << "=" <<y <<"\n" ;
    n= n+1;
   }
   return 0;
}
