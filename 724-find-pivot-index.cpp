#include<iostream>
#include<vector>
using namespace std;
int main(){
  class Solution {
    public:
        int pivotIndex(vector<int>& nums) {
            int n=nums.size();
            for(int i=1; i<n; i++){
                nums[i]=nums[i]+nums[i-1]; // prefix sum
    
            }
            // finding pivot
            int total=nums[n-1];
            for(int i=0; i<n; i++){
                int leftsum= (i==0) ? 0 : nums[i-1];
                int rightsum= total-nums[i];
                if(leftsum==rightsum) return i;
                
            }
            return -1;
    
            
        }
    };
            
    
}