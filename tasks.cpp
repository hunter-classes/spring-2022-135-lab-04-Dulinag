#include <iostream>
#include "tasks.h"
using namespace std;

void box(int width,int height ){


  int i, c;
  ::string result;




  for (i = 1; i <= width; i++){

      result += "*";


    }


    for (c = 1; c <= height; c++){

         cout << result <<  endl;

  }



}



void checkerboard(int width,int height){


  int i, c;


   string result = " ";
   string result2 = " ";

  for (i = 0; i < width; i++){

    if (i %  2 == 0){

      result += " ";


    }

    else if (i % 2 == 1){
      result += "*";


    }
  }


  for (c = 0; c < width; c++){

    if (c %  2 == 0){

      result2 += "*";


    }
    else if (c % 2 == 1){
      result2 += " ";

    }
  }

    for (i = 0; i < height; i++){

      if (i %  2 == 0){

        cout << result2 << endl;

      }

      if (i %  2 == 1){

      cout << result << endl;

    }


  }


}






void cross(int a){

  int i, c;
   string result;
  result += "*";




  for (i = 1; i <= a; i++){

    for (c = 1; c <= a; c++){

      if (c == i || c == (a + 1 - i))
                 cout<<result;
            else
                cout << " ";

              }


                 cout << endl;
             }




}

void lowertriangle(int a){


  int i, c;
   string result = "*";

  for (i = 1; i <= a; i++){

    for (c = 1; c <= i; c++){

      cout << result;


    }
       cout<< endl;

}







}


void uppertriangle(int a){


  int i, c, x;
  string result = "*";


  for (i = a; i >= 1; i--){

    for (c = a-i; c > 0; c--)

    cout<<" ";

    for (x = i; x > 0; x--){

      cout<< result;
    }


  cout << endl;
}

}



void trapezoid (int width, int height){

  int spaces = 0;
  int stars = width;
  int i, c, x;
  string result = "*";


   for (i = 0; i < height; i++) {

     spaces += 1;
     stars -= 2;

   }

   if(stars < 0){

      cout << "Impossible Shape!"<< endl;
      return;
   }


   stars = width;
   spaces = 0;


    for (i = 0; i < height; i++){

      for (c = 0; c < width; c++) {

        if(c == spaces){

          for (x = 0; x < stars; x++){


             cout << result;
          }


        }
          else {

             cout << " ";
          }


          }
          spaces += 1;
          stars -= 2;

   cout<<endl;

    }
  }





void checkerboard3x3(int width, int height){


  int stars = 0;
  int spaces = 0;
  int i, c, x;
   string result = "*";


   for (i = 0; i < height; i++) {


      for (c = 0; c < width; c++) {

        if((c % 6 < 3 && i % 6 < 3)|| (c % 6 >= 3 && i % 6 >= 3)){

          if (stars < 3){
             cout << "*";
          }
          stars = stars + 1;
          if (stars == 3){

            stars = 0;
          }

          }
          else{

            if (spaces < 3){
            cout << " ";
            }
            spaces += 1;

            if (spaces == 3){
              spaces = 0;
            }
        }
      }

   cout<<"\n";

    }
  }
