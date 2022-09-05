string armstrongNumber(int n){
    // code here
    int temp = 0,y = n;
    while(y > 0){
        temp += pow((y%10),3);
        y /= 10;
    }
    if(temp == n)   return "Yes";
    else    return "No";
}
