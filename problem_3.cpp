// Two Sum

//47/63 test cases passed

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::vector<int> res;
        for(int i=0; i < nums.size() -1; ++i)
            {
              if(nums.at(i) + nums.at(i+1) == target){
                    
                    res.push_back(i);
 res.push_back(i+1);
 break;
                     
                  }
            }
     return res;   
   }
    
};