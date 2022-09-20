#include "main.h"

void max_no_of_page(bk *books, int n){
    int id=0,pgNo=0;
    for(int i=0; i<n; i++){
        if(pgNo <= books[i].noOfPages){
                pgNo += books[i].noOfPages;
            id = books[i].id;
        }
    }

    printf("\nMaximum no of pages book details ->\n");
    printf("%d\n",books[id-1].id);
    printf("Title of book -> %s \n",books[id-1].title);
    printf("Author of book -> %s \n",books[id-1].author);
    printf("Publisher of book -> %s \n",books[id-1].publisher);
    printf("Price of book -> %f \n",books[id-1].price);
    printf("No of pages of book -> %d \n",books[id-1].noOfPages);
    printf("Year of release of book -> %d \n",books[id-1].yearOfRelease);
    printf("\n\n");
}
