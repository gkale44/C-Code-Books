
#include "avg_price_of_book.h"

void avg_price_of_book(bk *books, int n){
    float sum = 0;
    for(int i=0; i<n; i++){
        sum += books[i].price;
    }
    sum = sum /n;
    printf("\nAvarage price of the book = %f\n",sum);
}
