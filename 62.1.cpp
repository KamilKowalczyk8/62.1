#include <iostream>
#include <fstream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
  
int main(int argc, char** argv) {  
 ifstream plik ("liczby1.txt");
 int liczba;
  int maks = 0;
   int mini = 1000000;
 while(plik >> liczba){
 if ( liczba > maks) maks = liczba;
 if ( liczba < mini) mini = liczba;

}
 cout <<"liczba maksymalna "<< maks<<"\n";
  cout <<"liczba minimalna "<< mini<<"\n";
return 0;
}
