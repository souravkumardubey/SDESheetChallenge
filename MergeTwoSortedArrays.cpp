#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	
    int i = 0 , j = 0;
    vector < int > vec;
    
    while ( i < m && j < n ) {
        
        if ( arr1[i] < arr2[j] ) {
            
            vec.push_back(arr1[i]);
            i += 1;
            
        } else {
            
            vec.push_back(arr2[j]);
            j += 1;
            
        }
        
    }
    
    while ( i < m ) {
        
        vec.push_back(arr1[i]);
        i += 1;
        
    }
    
    while ( j < n ) {
        
        vec.push_back(arr2[j]);
        j += 1;
        
    }
    return vec;
    
}
