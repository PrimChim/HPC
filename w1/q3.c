#include <stdio.h>
#include <stdlib.h>

void main()
{
    for(int n =0; n <101; n++){
        if(n%2 == 0 && n%3== 0 && n%5 == 0)
            printf("BishBashBosh\n");
        else if(n%2 == 0 && n%3== 0)
            printf("BishBash\n");
        else if(n%2 == 0 && n%5== 0)
            printf("BishBosh\n");
        else if(n%3 == 0 && n%5== 0)
            printf("BashBosh\n");
        else if(n%2 == 0)
            printf("Bish\n");
        else if(n%3 == 0)
            printf("Bash\n");
        else if(n%5 == 0)
            printf("Bosh\n");
        else
            printf("%d\n", n);
    }
}
