#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	vector < int > freq(n+1 , 0);

    for ( int i = 0 ; i < n ; i++ ) {
        
        freq[arr[i]] += 1;
        
    }
    
    int missing = 0 , extra = 0;

    for ( int i = 1 ; i <= n ; i++ ) {
        
        if ( freq[i] == 0 ) missing = i;
        
        if ( freq[i] == 2 ) extra = i;
        
    }
    
    return {missing,extra};
    
}
