
//Need some logic optimization some test cases are failing 108 / 129 testcases passed

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int total(0);
        int size = flowerbed.size();
        for(int i = 0; i < size; ++i) {
            if((i+1) < size) {
                 if((flowerbed.at(i) == 0) && (flowerbed.at(i+1) == 0)) {
                     total += 1;
                     flowerbed.at(i+1) = 1;
                 }
            }
        }
        if(n == total){
            return true;
        }
        else{
            return false;
        }
    }
};
