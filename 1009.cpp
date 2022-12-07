#include <iostream>
#include <iomanip>
using namespace std;

int main(){
string name;
double salary,totalSale,totalSalary;
cin>>name>>salary>>totalSale;
totalSalary=salary+totalSale*0.15;

cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<totalSalary<<endl;
return 0;
}
