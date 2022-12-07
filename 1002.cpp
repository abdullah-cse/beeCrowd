#include <iostream>
#include <iomanip>
using namespace std;

int main(){
const double pi=3.14159;
double R, A;

cin>>R;
A=pi*R*R;
cout<<"A="<<fixed<<setprecision(4)<<A<<endl;
return 0;
}
