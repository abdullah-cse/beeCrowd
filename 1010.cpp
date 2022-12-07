#include <iostream>
#include <iomanip>

using namespace std;
int main(){

int a,b,x,y;
double m,n,ans;
cin>>a>>x>>m;
cin>>b>>y>>n;
ans=(x*m)+(y*n);
cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<ans<<endl;
return 0;
}
