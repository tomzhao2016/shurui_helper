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


    int path_num_total = 0;
    // initialize a matrix
    int *path_bt;
    for(int row = 0;row < n;row++){
    	for(int col=0;col < n;col++){
    		path_bt[row*n + col] = x[row]&x[col];
    	}
    }
    	
    std::cout << path_bt[0] << "yes" << '\n';
    // find the path 




    //std::cout << x.size() << " was added to the Vector" << '\n';
    std::cout << path_num%991127 << " was added to the Vector" << '\n';
}