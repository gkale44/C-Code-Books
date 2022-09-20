#include "min_max_price.h"

void min_max_price(bk *books, int n){
    float min =99999999, max = 0;
    for(int i =0; i<n; i++){
        if(books[i].price < min)
            min = books[i].price;
    }

    for(int i =0; i<n; i++){
        if(books[i].price > max)
            max = books[i].price;
    }

    printf("\nMin/Max value of book ->\n Min value = %f\n Max value = %f\n", min, max);
}
