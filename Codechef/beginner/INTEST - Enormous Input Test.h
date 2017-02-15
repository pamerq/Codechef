//
//  INTEST - Enormous Input Test.h
//  Codechef
//
//  Created by Pamela Revuelta on 14/02/17.
//  Copyright © 2017 Bryan Gonzales Vega. All rights reserved.
//

#ifndef INTEST___Enormous_Input_Test_h
#define INTEST___Enormous_Input_Test_h 

/*****
The purpose of this problem is to verify whether the method you are using to read input data is sufficiently fast to handle problems branded with the enormous Input/Output warning. You are expected to be able to process at least 2.5MB of input data per second at runtime.
 
Input: The input begins with two positive integers n k (n, k<=107). The next n lines of input contain one positive integer ti, not greater than 109, each.
Output:Write a single integer to output, denoting how many integers ti are divisible by k.
 
Input:
 7 3
 1
 51
 966369
 7
 9
 999996
 11
 
Output:
 4
*****/

#include <iostream>

void run(){
    int n, k;
    std::cin >> n >> k; std::cin.ignore();
    int contador =0;
    unsigned int number;
    while(n--){
        std::cin >> number;
        if(number % k ==0){contador++;}
    }
    std::cout << contador << "\n";
}

#endif /* INTEST___Enormous_Input_Test_h */
