
/*
* Ho Chi Minh City University of Technology
* Faculty of Computer Science and Engineering
* Initial code for Assignment 1
* Programming Fundamentals Spring 2026
* Date: 27.01.2026
*/

//The library here is concretely set, students are not allowed to include any other libraries.

#include "water_seven.h"

using namespace std;


void printValue(
    char character[FIXED_CHARACTER][MAX_NAME], int hp[FIXED_CHARACTER], 
    int skill[FIXED_CHARACTER], int shipHP, int repairCost){
        
        for (int  i = 0 ; i < FIXED_CHARACTER; i ++){
            printf("%s , %d , %d  \n",character[i], hp[i],skill[i]);
        }
        printf("%d , %d ",shipHP,repairCost);
    }



int main() {     //int argc, const char * argv[]
    cout << "Hello, World!" << endl;

    const string filename = "D:\\CodeStudy\\C++\\Exam\\Assignment\\opw_tc_01_input" ;
    char character[FIXED_CHARACTER][MAX_NAME];
    int hp[FIXED_CHARACTER], skill[FIXED_CHARACTER], shipHP, repairCost;

    
    cout << damageEvaluation(411, 253) << endl;
    
    











    return 0;

}
