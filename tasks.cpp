#include <iostream>
#include "tasks.h"
using namespace std;

std::string box(int a,int b){


  int i, c;
  std::string result;




  for (i = 1; i <= a; i++){

      result = result + "*";

  }

  for (c = 1; c <= b; c++){

    cout<<result<<endl;

    }



return result;


}



std::string checkerboard(int a,int b){


  int i, c;
  int t;


  std::string result;

  for (i = 1; i <= a; i++){

        result = result + "*";

  }

  for (c = 1; c <= b; c++){

    cout<<result<<endl;

    if (c % 1 == 0){

      cout<<" " << result << endl;

    }

  }





return result;


}


std::string cross(int a){





  int i, c;
  std::string result;
  result += "*";




  for (i = 1; i <= a; i++){

    for (c = 1; c <= a; c++){

      if (c == i || c == (a + 1 - i))
                cout << result;
            else
                cout << " ";

              }


                 cout << endl;
             }


return result;

}

std::string lowertriangle(int a){


  int i, c;
  std::string result;
  result += "*";

  for (i = 1; i <= a; i++){

    for (c = 1; c <= i; c++){

      cout << result;


  }

  cout << endl;
}




return result;


}
