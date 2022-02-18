//DIANA PADILLA ZAMORA
// Muestre todos los números capicúas o palíndromos dentro de un rango determinado.
// Un número es capicúa cuando al invertir sus cifras nos da el mismo número

#include<iostream>
using namespace std;
int main()
{
 
  int n;
  int s;
  int inv;
  int i;
  int linf;
  int lsup;
 
 
 cout<<"Ingrese su limite inferior:";cin>>linf;
 cout<<"Ingrese su limite superior:";cin>>lsup;
 for(i=linf;i<lsup;i++)
 {
 n=i;
 inv=0;
 while(n>0)
 {
 inv=(10*inv)+(n%10);
 n=n/10;
 }
 if(inv==i)
 {
 cout<<inv<<" ";
 s=s+1;
 }
 }
 cout<<endl;
 cout<<"total de capicuas es= "<<s;
 return 0;
} 

