#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	int n = matrix.size();
    int m = matrix[0].size();
    
    map < int , int > row , col;
    
    for ( int i = 0 ; i < n ; i++ ) {
        
        for ( int j = 0 ; j < m ; j++ ) {
            
            if ( matrix[i][j] == 0 ) {
                
                row[i] = 1;
                col[j] = 1;
                
            }
            
        }
        
    }
    
    for ( int i = 0 ; i < n ; i++ ) {
        
        for ( int j = 0 ; j < m ; j++ ) {
            
            if ( row[i] || col[j] ) {
                
                matrix[i][j] = 0;
                
            }
            
        }
        
    }
    
}
