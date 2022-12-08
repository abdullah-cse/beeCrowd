#include <iostream>
#include <iomanip>

using namespace std;

int main(){
int X;
double Y,consum;

cin>>X>>Y;
consum=X/Y;

cout<<fixed<<setprecision(3)<<consum<<" km/l"<<endl;

return 0;
}
