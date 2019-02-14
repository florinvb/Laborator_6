#include <iostream>

using namespace std;

int main()
{

   int a[] = { 7, 56, 77, 44,7 ,7, 33, 27};
   int i;
   int n;
   int x;
   n=1;
   x=0;

   for (i=0; i < 8; i++)
    if (a[i]==7) x=x+1;
    cout << " cifra 7 apare de " << x << " ori"<< endl;

    return 0;
}
