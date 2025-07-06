#include<iostream>
#include<vector>
using namespace std;
int main(){
  class NumArray {
    public:
         vector<int>prefix;
        NumArray(vector<int>& nums) {
            int n=nums.size();
            prefix.resize(n);
            prefix[0]=nums[0];
            for(int i=1; i<n; i++){
                prefix[i]=prefix[i-1]+nums[i]; // prefix sum
    
    
    
            }
            
        }
        
        int sumRange(int left, int right) {
            if(left==0) return prefix[right]; // sum range like pre[b]-pre[a-1]
            return prefix[right]-prefix[left-1];
    
            }
            
    };
    
}