//
//  main.cpp
//  2.time&SpaceComplex
//
//  Created by Mansi Bakshi on 23/09/23.
//
// What is TC & SC?
// tc not as time taken
// depend on system --> time taken
// rate at which time taken increases wrt input size --> TC
// TC --> not in sec or min --> big Oh notation --> O()
// 3 steps :
//// 1.tc to be computed in worst case senario
//// 2.avoid constants
//// 3.avoid lower values
// best case -- avg case -- worst case
//BigO() -------> upper bound,worst case
//Theta() -------> average complexity
//Omega() -------> lower bound,best case
// SC --> Memory space our program takes --> also dependent on machiene
// --> also in big-oh notation
// auxilary space + input space
// aux space - space to solve the problem
// inp space - space to store the input
// never do anything with(on) i/p,dont manipulate data,however it saves space,dont temper with data
// b = a + b



#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    int m = 89;
    if(m < 20){
        cout<<"D";
//        ---> O(2)
    }
  else  if(m < 50){
        cout<<"C";
    }
  else  if(m < 60){
        cout<<"B";
    }
   else{
        cout<<"A";
//       --->O(5)
    }
    return 0;
}
