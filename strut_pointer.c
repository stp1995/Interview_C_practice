#include <stdio.h>

int main()
{
    struct record {
        int i;
        char *c;
    }st[]={203, "family", 506, "house", 459, "jungle", 873, "office", 412, "travel"};
    
    struct record *p = st;
    p+= 1;
    ++p -> c;
    printf("%s, ",p++ -> c);
    printf("%c, ",*++p -> c);
    printf("%d, ",p[0].i);
    
    return 0;
}
