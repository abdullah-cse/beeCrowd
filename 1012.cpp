#include <iostream>
#include <iomanip>

using namespace std;

int main(){
const double pi=3.14159;

double A, B, C;
double tri=0, crl=0, trap=0, sqr=0, rect=0;

cin>>A >>B >>C;

tri=0.5*A*C;
crl=pi*C*C;
trap=((A+B)/2)*C;
sqr=B*B;
rect=A*B;

cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<tri<<endl;
cout<<"CIRCULO: "<<fixed<<setprecision(3)<<crl<<endl;
cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<trap<<endl;
cout<<"QUADRADO: "<<fixed<<setprecision(3)<<sqr<<endl;
cout<<"RETANGULO: "<<fixed<<setprecision(3)<<rect<<endl;
return 0;
}
