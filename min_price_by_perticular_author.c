#include "min_price_by_perticular_author.h"

void min_price_by_perticular_author(bk *books, int n){
    char author[50]="";
    int flag =0, id =0;
    float price=99999999;
    printf("\nEnter author name which you want to find \n");
    scanf("%s",&author);
    for(int i=0; i<n; i++){
        if(strcmp(books[i].author, author) == 0){
            if(books[i].price < price){
                price = books[i].price;
                flag = 1;
                id = books[i].id;
            }
        }
    }
    if(flag == 0){
        printf("You enter wrong author. Author is not present. \n");
    }else{
        printf("\nBook with minimum price by a particular author --- %s\n",books[id-1].title);
    }
}
