#include <iostream>
using namespace std;

int main()
 {
   int n = 0, maior = 0;
   
     do{
     cout<<"Informe o valor de n: ";
     cin>>n;

     if(n > maior){
       maior = n;
     }

     }while(n != 0);

   cout<<"\nMaior numero: "<<maior;
   return 0;
}