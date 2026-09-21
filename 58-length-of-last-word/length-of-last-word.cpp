class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.size()-1;
        int count=0;
        while(s[i]==' '){
            i--;
        }
        for(i;i>=0;i--){
            if(s[i]==' ') break;
            count++;
        }
        return count;
    }
};