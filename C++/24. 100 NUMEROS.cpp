//Realiza un programa en el cual de manera aleatoria se impriman 100 numeros enteros y que calcule cuantos numeros fueron mayores que 0, cual es el promedio de los numeros positivos y el promedio general de todos los numeros.

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main (){
int a, b, total1, total2, c, e;
srand(time(NULL));
cout<<"Te voy a regalar 100 numeros"<<endl;
system ("pause");
system("color 80");
b=0;
c=0;
e=0;
total2=0;
total1 = 0;
for(int x=0; x<100; x++){

a= -1000 + rand() % (1001 - (-1000));
cout<<a<<"\t";
a++;
e++;
total2=a+total2;
if(a>0){
b++;	
total1 = total1+a;
}
}

cout<<""<<endl;

cout<<"En tu lista de numeros hay: "<<b<<" numeros positivos \n la suma de esos numeros es: "<<total1<<endl;
cout<<"\tY su promedio es:"<<total1/b<<endl;
cout<<"\tla suma de todos los numeros es: "<<total2<<endl;
cout<<"\tY el promedio General es: "<<total2/100<<endl;


return 0;
}
