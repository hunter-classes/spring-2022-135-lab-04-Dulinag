#include <iostream>
#include "tasks.h"
using namespace std;


int main() {


string result = box(4,5);
cout<<result<<endl;
cout<<endl;

string result2 = checkerboard(4,5);
cout<< result2 <<endl;
cout<<endl;

string result3 = cross(4);
cout<< result3 <<endl;
cout<<endl;

string result4 = lowertriangle(4);
cout<< result4 <<endl;
cout<<endl;


return 0;


}
