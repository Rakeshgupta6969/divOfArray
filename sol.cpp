class Solution {
    public:
        bool divideArray(vector<int>& nums) {
         
        //  // using the bits manipulation.
         int n = nums.size();
         if(n%2 != 0) return false;
    
        //   int ans = 0;
    
        //   for(int i = 0; i<nums.size(); i++){
    
        //    ans ^= nums[i];
    
        //   }
    
        //   if(ans == 0) return true;
    
        //   return false;
         
       
    
          // using the hashmap.
    
          unordered_map<int,int>mp;
    
          for(auto i: nums){
            mp[i]++;
          }
    
    
         for(auto i: mp){
            if(i.second %2 != 0) return false;
         }
    
          return true;
        }
    };