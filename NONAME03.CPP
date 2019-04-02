#include <iostream.h>
#include <conio.h>

int main ()
{ int i=10, j=20, k=30, r;
r = i > j ;
cout <<"r = "<<r <<endl;
r = i > j ;
cout <<"r = "<<r <<endl;
r = i >= k ;
cout <<"r = "<<r <<endl;
r = j < k ;
cout <<"r = "<<r <<endl;
r = i == j ;
cout <<"r = "<<r <<endl;
r = i != k ;
cout <<"r = "<<endl;
r = (i > j) && (j > k);
getch();
clrscr();
}


