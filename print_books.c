#include "print_books.h"

void print_books(bk*books, int n){
    printf("\n------------------- All books  ---------------------\n");

    for(int i=0; i<n; i++){
        printf("%d\n",books[i].id);
        printf("Title of book -> %s \n",books[i].title);
        printf("Author of book -> %s \n",books[i].author);
        printf("Publisher of book -> %s \n",books[i].publisher);
        printf("Price of book -> %f \n",books[i].price);
        printf("No of pages of book -> %d \n",books[i].noOfPages);
        printf("Year of release of book -> %d \n",books[i].yearOfRelease);
        printf("\n\n");
    }
    printf("\n-----------------------------------------------------------\n");
}
