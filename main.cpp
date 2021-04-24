#include <iostream>
using namespace std;

int main()
 {
   int n = 0, maior = 0;

   while(n != 0){
     cout<<"Informe o valor de n: ";
     cin>>n;

     if(n > maior){
       maior = n;
     }
   }

   cout<<"Maior numero: "<<maior;
}