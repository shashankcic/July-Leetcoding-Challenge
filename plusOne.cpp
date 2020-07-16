class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> res;
        int n=digits.size(),carry=1,ind=n-1;
        while(ind>=0){
            if(carry){
               res.push_back(digits[ind]==9? 0:digits[ind]+1);
               carry=digits[ind]==9? 1:0;
            }
            else{ 
                res.push_back(digits[ind]);
            }
            ind--;
        }
        if(carry){ 
            res.push_back(1);
        }
        return {res.rbegin(),res.rend()};
    }
};
