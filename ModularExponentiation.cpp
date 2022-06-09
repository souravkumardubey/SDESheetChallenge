#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
	
    int ans = 1;

    while ( n > 0 ) {
        
        if ( n & 1 ) {
            
            ans = ( 1LL * ans * (x)%m);
            
        }
        
        n = n >> 1;
        
        x = ( 1LL *  (x)%m * (x)%m );
        
    }
    
    return ans % m;
    
}
