//My Solution which took 3ms 
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        std::string res = "";
        int i,j;

        if(word1.size() == word2.size()){
            for(i = 0; i < word1.size(); ++i){
                res = res + word1[i] + word2[i];
            }
        }
        else if (word1.size() > word2.size()){
           for(i = 0; i < word2.size(); ++i){
                res = res + word1[i] + word2[i];
           }
           for(j = i; j < word1.size(); ++j){
               res = res + word1[j];
           }
        }
        else {
            for(i = 0; i < word1.size(); ++i){
                res = res + word1[i] + word2[i];
           }
           for(j = i; j < word2.size(); ++j){
               res = res + word2[j];
           }

        }
        return res;
    }
};


//Optimal Solution of others which took 0ms

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.length(), m = word2.length();
        string ans = "";
        int i = 0, j = 0;
        while(i < n && j < m){
            if((i + j) & 1){
                ans += word2[j++];
            }
            else{
                ans += word1[i++];
            }
        }

        while(i < n) {ans+=word1[i++];}
        while(j < m) {ans+=word2[j++];}

        return ans;
    }
};
