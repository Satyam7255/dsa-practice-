long Solution::solve(int a, int b) {
    
    long l = __gcd(a,b);
    long k= a/l;
    long p=k*b;
    
    return p;
}
