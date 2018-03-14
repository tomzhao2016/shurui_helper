#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "path_search.h"
#include <set>
#include <iostream>
#include <vector>



int ReadNumbers()
{
	int n;
	std::cout << "Enter n: "; // no flush needed
    std::cin >> n;
    std::cout << "Enter n"<<n;

    int num;
    vector<int> x;
    cout << "Enter Numbers: " << '\n';
    while(cin >> num)
    {
        x.push_back(num);
        cout << num << " was added to the Vector" << '\n';
    }
}

int main()
{
    ReadNumbers();
}