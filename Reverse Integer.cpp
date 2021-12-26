class Solution {
public:
    int reverse(int x) {
        


        int ans=0;
        
        for(int i =0;i<=30;i++){
            if(x!=0){
                    int digit = x%10;
                if(ans>INT_MAX/10 || ans<INT_MIN/10){
                    return 0;
                }
                    ans = (ans*10) + digit; 
                    x = x/10;
            }
        }
        return ans;
    }
};
    
