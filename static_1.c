void f()
{
    static int i=3;
    printf("%d",++i);
}
int main()
{
    f();
    f();
    f();
}
