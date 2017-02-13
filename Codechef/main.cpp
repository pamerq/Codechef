//
//  main.cpp
//  Codechef
//
//  Created by Bryan Gonzales Vega on 2/12/17.
//  Copyright © 2017 Bryan Gonzales Vega. All rights reserved.
//

#include "FLOW06 - Sum of Digits.h"

#include <fstream>

// Submit instructions:
// Copy and replace proper run() function with "int main(){ <ANSWER> return 0; }"

int main(int argc, const char * argv[]) {
    std::streambuf *buf = std::cin.rdbuf();
    std::ifstream file ( "input.txt" );
    std::cin.rdbuf( file.rdbuf() );
    
    run();

    std::cin.rdbuf ( buf ); // reset cin buffer

    return 0;
}
