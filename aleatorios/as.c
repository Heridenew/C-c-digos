    #include <stdio.h>
    #include <string.h>
    #include <math.h>
    #include <stdlib.h>
    #define max 1000
    #define max2 (max * 2)

    int main ()
    {
        int c, i, j, n, m;
        double p[max], q[max], pq[max2];

        
    while (scanf("%d") != EOF)
    {
        scanf ("%d %d",&n,&m);
    }
        
        if (n < max  && m < max)
        {
            for (i = n; i >= 0; i = i - 1) scanf("%lf", &p[i]);
            for (j = m; j >= 0; j = j - 1) scanf("%lf", &q[j]);
            for (i = 0; i <= n + m; i = i + 1) pq[i] = 0;
            for (i = 0; i <= n; i = i + 1)
                for (j = 0; j <= m; j = j + 1)
                    pq[i + j] = pq[i + j] + p[i] * q[j];
            for (i = n + m; i >= 0; i = i - 1) printf("Caso #i: %7.3lf", pq[i]);
        }

        printf('\n');
        return 0;
    }
