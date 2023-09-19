#include <iostream>

using namespace std;

//11. Hacer un programa para ingresar una lista de números que corta cuando se
//ingresa un cero y luego mostrar: la cantidad de números primos, la cantidad de
//números pares, la cantidad de positivos y la cantidad de negativos.

int main()
{int n,conPrimos=0,conPares=0,conPos=0,conNeg=0;

cout<<"Ingresar un numero (Corta en 0): ";
cin>>n;

       while(n!=0){
           int x=1,con=0;
                 while(x<=n){
                       if(n%x==0){con++;}      //Primos
                       x++;
                       }
           if(con==2){conPrimos++;}
           if(n%2==0){conPares++;}
           if(n>0){conPos++;}
             else {conNeg++;}


        cout<<"Ingresar un numero: ";
        cin>>n;
       }

cout<<endl<<"Hay "<<conPrimos<<" numeros primos."<<endl;
cout<<endl<<"Hay "<<conPares<<" numeros pares."<<endl;
cout<<endl<<"Hay "<<conPos<<" numeros positivos."<<endl;
cout<<endl<<"Hay "<<conNeg<<" numeros negativos."<<endl;
    return 0;
}
