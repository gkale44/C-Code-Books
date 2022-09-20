
#include "add_books.h"
void add_books(bk *books, int n){
    char title[50]="",author[50]="", publisher[50]="";
    for(int i=0; i<n; i++){
            books[i].id = i+1;
        printf("Insert book %d title\n",i+1);
        scanf("%s",&title);
        strcpy(books[i].title, title);

        printf("Insert book %d author\n",i+1);
        scanf("%s",&author);
        strcpy(books[i].author, author);

        printf("Insert book %d publisher\n",i+1);
        scanf("%s",&publisher);
        strcpy(books[i].publisher, publisher);

        printf("Insert book %d price\n",i+1);
        scanf("%f",&books[i].price);

        printf("Insert book %d no of pages\n",i+1);
        scanf("%d",&books[i].noOfPages);

        printf("Insert book %d year of release\n",i+1);
        scanf("%d",&books[i].yearOfRelease);
    }
}
