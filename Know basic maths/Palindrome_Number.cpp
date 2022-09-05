bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        else{
            int y = x;
            long long temp=0;
            while(y > 0){
                temp = temp*10 + y%10;
                y /= 10;
            }
            if(temp == x)   return true;
            else    return false;
        }
    }
