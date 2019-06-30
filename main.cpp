#include <iostream>
#include <cstdlib>
#include "./api/api.hpp"
using namespace std;
int main(){
    double a,b,c=0;
    cout << "Hello World!" << endl;
    cout << "Please input value to add"<< endl;
    cin >> a >> b;
    c=sum(a,b);
    cout<< "The value is :"<<c<<endl;
}