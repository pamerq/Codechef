//
//  FLOW004 - First and Last Digit.h
//  Codechef
//
//  Created by Pamela Revuelta on 14/02/17.
//  Copyright © 2017 Bryan Gonzales Vega. All rights reserved.
//

#ifndef FLOW004___First_and_Last_Digit_h
#define FLOW004___First_and_Last_Digit_h

/*****
If Give an integer N . Write a program to obtain the sum of the first and last digit of this number.
 
Unput: The first line contains an integer T, total number of test cases. Then follow T lines, each line contains an integer N.
 
Output: Display the sum of first and last digit of N.
 
Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000

Input
 3
 1234
 124894
 242323
 
Output
 5
 5
 5
*****/

#include <iostream>
#include <math.h>

void run(){
    int numcases;
    std::cin >> numcases; std::cin.ignore();
    int number;
    int last;
    while(numcases--){
        std::cin >> number;
        last = number%10;
        number = number / pow(10,(int)log10(number));
        std::cout<<number+last<<'\n';
    }
}

#endif /* FLOW004___First_and_Last_Digit_h */
