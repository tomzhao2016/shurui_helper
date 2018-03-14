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

    int num;
    std::cout << "Enter Numbers: " << '\n';
    for(int j = 0;j < n ;j++)
    {
    	std::cin >> num;
        x.push_back(num);
        //std::cout << num << " was added to the Vector" << '\n';
    }
    return n;
}

int main()
{
	std::vector<int> x;
	int n;
    n = ReadNumbers(x);

    int path_num = 0;
    // initialize a matrix
    std::cout << 700&8 << " &&&&&&&" << '\n';
    // find the path 




    //std::cout << x.size() << " was added to the Vector" << '\n';
    std::cout << path_num%991127 << " was added to the Vector" << '\n';
}