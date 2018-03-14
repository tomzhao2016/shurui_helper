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
    int *path_bt = (int*)malloc(n*n*sizeof(int));
    for(int row = 0;row < n;row++){
    	for(int col=0;col < n;col++){
    		if (col<=row){
    			path_bt[row*n + col] = 0;
    		}
    		else{
    			path_bt[row*n + col] = x[row]&x[col];
    		}
    		//std::cout << path_bt[0] << "yes" << '\n';
    	}
    }
    
    // find the path - naive

    std::vector< std::vector<int> > single_path_old;
    for(int pos = 0; pos<n-1; pos++){
    	
    	std::vector< std::vector<int> > single_path_new;
    	
    	if(pos == 0){
    		std::vector<int> row_vec;
	    	std::vector<int> row_vec_name;
    		for(int col = 0;col<n;col++){
	    		if(path_bt[pos*n + col]!=0&&col != n-1){
	    			// save numbers that not equal to zero
	    			row_vec.push_back(path_bt[pos*n + col]); // Add path num to the row
	    			row_vec_name.push_back(col); // Add path name to the row
	    		}
	    		else if(col == n-1){
	    			path_num_total += path_bt[pos*n + col]; 
	    		}
	    	}
	    	single_path_new.push_back(row_vec_name);
		    single_path_new.push_back(row_vec); // Add the row to the main vector
    	}
    	else{
    		int vec_size = single_path_old[0].size();
    		std::vector<int> row_vec;
	    	std::vector<int> row_vec_name;
    		for (int idx = 0; idx<vec_size; idx++){
    			int col_start = single_path_old[0][idx];
    			
    			for(int col = col_start;col<n;col++){
		    		if(path_bt[col_start*n + col]!=0&&col != n-1){
		    			// save numbers that not equal to zero
		    			row_vec.push_back(path_bt[col_start*n + col]*single_path_old[1][idx]); // Add path num to the row
		    			row_vec_name.push_back(col); // Add path name to the row
		    		}
		    		else if(col == n-1){
		    			path_num_total += single_path_old[1][idx]; 
		    		}
	    		}
	    		
    		}
    		single_path_new.push_back(row_vec_name);
		    single_path_new.push_back(row_vec);
    	}
    	single_path_old = single_path_new;

    }



    //std::cout << x.size() << " was added to the Vector" << '\n';
    std::cout << path_num_total%991127 << " was added to the Vector" << '\n';
}