int reverse(int y) {
        int f;
        long long x = y;
        if(x >= 0)  f = 1;
        else{
            f = -1;
            x *= -1;
        }
        
        long long temp = 0;
        
        while(x > 0){
            temp = temp * 10 + x%10;
            x /= 10;
        }
        
        if(-pow(2,31) <= temp and temp < pow(2,31)){
            if(f == 1)  return temp;
            else    return -temp;
        }
        else{
            return 0;
        }
}
