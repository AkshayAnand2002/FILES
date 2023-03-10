https://leetcode.com/problems/isomorphic-strings/description/
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        char map_s[128]={0};
        //128 is taken as it is the maximum size of input string. 
        char map_t[128]={0};
        int len=s.size();
        for(int i=0;i<len;i++){
            if(map_s[s[i]] != map_t[t[i]]){
                return false;
            }
            map_s[s[i]]=i+1;
            map_t[t[i]]=i+1;
        }
        return true;
    }
};
//https://www.youtube.com/watch?v=VEuPGTIqXeQ
