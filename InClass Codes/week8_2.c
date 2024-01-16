#include <stdio.h>

struct groceryItems{
    int id;
    int price;
    int weight;
};

struct itemDetails{
    struct groceryItems item1;
    double priceperlb;
};

double convert(int *p, int *q, double *r){
    double temp;
    temp = (double)(*p)/(*q);
    *r = temp;
    
    return *r;
}

int main(void)
{
    int x = 1234;
    int y = 4;
    int z = 5;
    
    double price = 0.0; 
    
    struct groceryItems apple = {x,y,z};
    price = convert(&x, &y, &price);
    
    struct itemDetails item = {apple, price};

    printf("%lf", price);

    return 0;
}