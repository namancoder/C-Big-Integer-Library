//
//  main.cpp
//  C++ Big Integer Library
//
//  Created by Mahmud on 10/28/18.
//  Copyright © 2018 Mahmud. All rights reserved.
//

#include <iostream>

#include "integer.h"
#include "extra_integer_factory.h"

using namespace std;

int main(int argc, const char * argv[]) {
    Integer a = 44;
    cout << powI(a, 5) << endl;
    cout << powFastI(a, 5) << endl;
    
    Integer b = 10;
    cout << a / b << endl;
    cout << -a / b << endl;
    
    return 0;
}
