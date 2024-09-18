    

        scanf("(%d, %d)", &x, &y);
        scanf("%d*x^%d - %d*y^%d", &a, &n, &b, &m);

        if(  (y) == ((x) / (((a)*(pow(x, n))) - ((b)*(pow(y , m)))))){
        printf("a função está definida em (%d,%d)\n", x, y);
        return 0;}

        else 
        printf("a função não está definida em (%d,%d) .-.\n", x, y);

            return 0;
        }
