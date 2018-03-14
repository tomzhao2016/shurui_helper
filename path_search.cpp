#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "path_search.h"
#include <set>
#include <iostream>
#include <vector>


struct stdInput {
    int n;
    Foo() {
       std::cout << "Enter n: "; // no flush needed
       std::cin >> n;
    }
};
stdInput f; // static object
int main()
{
    std::cout << "f.n is " << f.n << '\n';
}