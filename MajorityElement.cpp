Brute Force approach
TC : O(n)
SC : O(n) -> map space

#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	// Write your code here.
    map < int , int > mp;
    
    for ( int i = 0 ; i < n ; i++ ) mp[arr[i]] += 1;
    
    for ( auto i : mp ) {
        
        if ( i.second > n / 2 ) return i.first;
        
    }
    
    return -1;
    
}

// -------------------------------------------------------------------------------------------------------------------------------------------

Space optimised approach
TC : O(n)
SC : O(1)


#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	// Write your code here.
    
    int ans = 0 , cnt = 0;
    
    for ( int i = 0 ; i < n ; i++ ) {
        
        if ( cnt == 0 ) ans = arr[i];
        
        if ( ans == arr[i] ) cnt += 1;
        else cnt -= 1;
        
    }
    
    cnt = 0;
    
    for ( int i = 0 ; i < n ; i++ ) {
        
        if ( arr[i] == ans ) cnt += 1;
        
    }
    
    if ( cnt <= n / 2 ) return -1;
    
    return ans;
    
}
