/*
ROUGH WORK

let n=5

lookandsay(5)
          \
           lookandsay(4)
                      \
                      lookandsay(3)
                                \
                                lookandsay(2)
                                          \
                                          lookandsay(1)
                      
*/

class Solution
{
  public:
    string lookandsay(int n) 
    {
        // code here
        int count=0;
        //ek empty string bnao for output
        string ans=" ";
        
        //base cases
        if(n==1)
        {
            ans=ans+"1";
            break;
        }
        else if(n>1)
        {
            //uski previous term dekho recursively till you get first term
            lookandsay(n-1);
        
            //ab ek ek karke pichle terms ko dekh ke current term bnao
            
            //repeating characters gino and count ko append karo
            for(int i=0;i<ans.length();i++)
            {
                while(ans[i]==ans[i+1])
                {
                    count++;
                }
                if(ans[i]!=ans[i+1])
                {
                    ans=count+ans;
                }
            }
        }
    }
    return ans;
};
