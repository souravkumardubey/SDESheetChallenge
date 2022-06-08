#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    
    int maxi = 0 , i = 0 , n = prices.size() , j = 1;
    
    while ( i < n && j < n ) {
        
        if ( prices[i] > prices[j] ) {
            
            i = j;
            j += 1;
            
        } else {
            
            maxi = max( maxi , prices[j] - prices[i] );
//             i += 1;
            j += 1;
            
        }
        
    }
    
    return maxi;
    
}
