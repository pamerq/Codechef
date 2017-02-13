//
//  FLOW06 - Sum of Digits.h
//  Codechef
//
//  Created by Bryan Gonzales Vega on 2/12/17.
//  Copyright © 2017 Bryan Gonzales Vega. All rights reserved.
//

#ifndef FLOW06___Sum_of_Digits_h
#define FLOW06___Sum_of_Digits_h

#include <iostream>

/******
You're given an integer N. Write a program to calculate the sum of all the digits of N.

Input: The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.
Output: Calculate the sum of digits of N.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 100000

Input:
3
12345
31203
2123
 
Output
15
9
8
******/

void run(){
    int testcases;
    std::cin >> testcases; std::cin.ignore();
    while(testcases--){
        std::string line;
        std::getline(std::cin, line, '\n');
        long long sum = 0;
        for(char c : line){
            sum += c - '0';
        }
        std::cout << sum << "\n";
    }
}

#endif /* FLOW06___Sum_of_Digits_h */
