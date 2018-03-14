#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "path_search.h"
#include <set>
#include <iostream>
#include <vector>



int ReadNumbers(std::vector<int> &x)
{
	int n;
	std::cout << "Enter n: "; // no flush needed
    std::cin >> n;
    std::cout << "Enter n"<<n;

    int num;
    std::cout << "Enter Numbers: " << '\n';
    for(int j = 0;j < n ;j++)
    {
    	std::cin >> num;
        *x.push_back(num);
        std::cout << num << " was added to the Vector" << '\n';
    }
    return n;
}

int main()
{
	std::vector<int> x;
	int n;
    n = ReadNumbers(&x);
    std::cout << x.size() << " was added to the Vector" << '\n';
    std::cout << n << " was added to the Vector" << '\n';
}