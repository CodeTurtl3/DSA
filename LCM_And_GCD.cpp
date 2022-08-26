long long gcd(long long a,long long b){
    if(b == 0)  return a;
    else    return gcd(b,a%b);
}

vector<long long> lcmAndGcd(long long A , long long B) {
    // code here
    vector<long long> v;
    v.push_back((A*B)/gcd(A,B));
    v.push_back(gcd(A,B));
    return v;
}
