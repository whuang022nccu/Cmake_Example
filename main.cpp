#include <iostream>
#include <cstdlib>
#include "./api/api.hpp"
#include "./third_party_api/csvstream.h"
using namespace std;
int main(){
    double a,b,c=0;
    cout << "Hello World!" << endl;
    cout << "Please input value to add"<< endl;
    cin >> a >> b;
    c=sum(a,b);
    cout<< "The value is :"<<c<<endl;
    csvstream csvin("../input.csv");
    map<string, string> row;
    while (csvin >> row) {
        cout << row["animal"] << "\n";
    }
}