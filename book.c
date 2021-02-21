#include <stdio.h>
#include <stdlib.h>

int* b,i; 
int** p;

int main()
{
    int s;
    scanf("%d", &s);

    int q;
    scanf("%d", &q);

    b = (int*)malloc(sizeof(int)*s);
    p = (int**)malloc(sizeof(int*)*s);

    for( i = 0; i < s; i++)
    {
        b[i] = 0;
        p[i] = (int*)malloc(sizeof(int));
    }

    while (q--)
    {
        int type_of_query;
        scanf("%d", &type_of_query);

        if (type_of_query == 1)
        {
            int x, y;
            scanf("%d %d", &x, &y);
            b[x] += 1;
            p[x] = realloc(p[x], b[x]*sizeof(int));
            p[x][b[x] - 1] = y;

        }
        else if (type_of_query == 2)
        {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", p[x][y]);
        }
        else
        {
            int x;
            scanf("%d", &x);
            printf("%d\n", b[x]);
        }
    }

    if (b)
        free(b);
        
    for ( i = 0; i < s; i++)
        if (p[i])
             free(p[i]);
            
    if (p)
        free(p);

    return 0;
}
