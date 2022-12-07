#include <iostream>
#include <iomanip>
using namespace std;

int main(){
int number,wh;
double hr,sal;

cin>>number>>wh>>hr;
sal=wh*hr;
cout<<"NUMBER = "<<number<<endl;
cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<sal<<endl;

return 0;
}
