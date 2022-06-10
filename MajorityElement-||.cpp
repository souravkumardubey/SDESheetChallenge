#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
    vector < int > vec;
    
    map < int , int > mp;
    
    for ( auto i : arr ) {
        
        mp[i] += 1;
        
    }
    
    for ( auto i : mp ) {
        
        if ( i.second > arr.size() / 3 ) {
            
            vec.push_back(i.first);
            
        }
        
    }
    
    return vec;

}
