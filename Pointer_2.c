int f(int n)
{
    static int i=1;
    if(n>=7)
        return n;
    n=n+i;
    i++;
    return f(n);
}
int main()
{
    int j;
    int k=0;
    j=f(k);
    printf("j=%d",j);
}
