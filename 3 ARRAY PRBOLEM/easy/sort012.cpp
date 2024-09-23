#include<bits/stdc++.h>
using namespace std ; 

// approach -1 (Sort the elements ){}
// Approach -2 (count and store )
    void sortColors(vector<int>& nums) {
        //Approch : Count the numbers and place  , T:O(n)
        int n =nums.size() ;

        int c0 , c1 , c2 ; 
        c0 = c1 = c2 = 0 ; 

        // count stored 
        for (int i=0 ;i<n ;i++){
            if (nums[i] ==0){
                c0++ ;
            }
            else if (nums[i] ==1){
                c1++ ;
            }
           else {
                c2++ ;
            }
        }
        // placing 
        for (int i=0 ;i<c0;i++){//0 placed 
            nums[i] =0 ;
        }
        for (int i=c0 ;i<c0+c1 ;i++){//1 placed 
            nums[i] =1 ;
        }
        for (int i=c0+c1 ;i<n;i++){//2 placed 
            nums[i] =2 ;
        }

        
    }

int main (){
    return 0 ;
}