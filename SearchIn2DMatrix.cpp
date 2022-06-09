bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
   int s = 0;
   int e = m*n - 1;
   int mid = s + (e-s)/2;
   
   while(s<=e){
       int element = mat[mid/n][mid%n];
       if(element == target){
           return true;
       }
       else if(element > target){
           e = mid- 1;
       }
       else{
           s = mid + 1;
       }
       mid = s + (e-s)/2;
   }
   return false;
}
