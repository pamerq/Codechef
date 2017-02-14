//
//  FLOW018 - Small Factorial.h
//  Codechef
//
//  Created by Bryan Gonzales Vega on 2/13/17.
//  Copyright © 2017 Bryan Gonzales Vega. All rights reserved.
//

#ifndef FLOW018___Small_Factorial_h
#define FLOW018___Small_Factorial_h

/*****
Write a program to find the factorial value of any number entered by the user.

Input: The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output: Display the factorial of the given number N .

Constraints
1 ≤ T ≤ 1000
0 ≤ N ≤ 20

Input
3
3
4
5

Output
6
24
120
*****/

#include <iostream>

void run(){
    
    int testcases;
    std::cin >> testcases; std::cin.ignore();
    
    while(testcases--){
    
        int factorial;
        std::cin >> factorial;
        if(factorial == 0) std::cout << "1\n";
        else{
            long long answer = 1;
            for(long long i = 1 ; i <= (long long)factorial ; ++i){
                answer *= i;
            }
            std::cout << answer << "\n";
        }
    }
}

#endif /* FLOW018___Small_Factorial_h */
