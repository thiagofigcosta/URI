#include <iostream>
using namespace std;

int main(){
    double a;
    cin>>a;
	cout.precision(2);
    if(a<=2000)
        cout<<"Isento"<<endl;
    else if (a<=3000)
    	cout<<fixed<<"R$ "<<(a-2000)*.08<<endl;
    else if (a <= 4500)
    	cout<<fixed<<"R$ "<<(a-3000)*.18+1000*.08<<endl;
    else if (a >= 4500.01)
    	cout<<fixed<<"R$ "<<(a-4500)*.28+1500*.18+1000*.08<<endl;
    return 0;
}