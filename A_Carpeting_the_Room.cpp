int main() {   //Pike language
    int n, k, n1;
    sscanf(Stdio.stdin.gets(), "%d %d %d", n, k, n1);
    
    int x = n / n1;
    
    if(n % n1 != 0)	x += 1;
    if(x * x > k)	write("NO");
    else	write("YES");
    
    return 0;
}