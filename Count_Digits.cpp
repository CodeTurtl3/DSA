class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int temp = N,count = 0;
        while(temp > 0){
            if((temp%10) > 0 and N%(temp%10) == 0)    
                count++;
            temp = temp/10;
        }
        return count;
    }
};
