#include "display_special_record.h"

void display_special_record(bk *books, int n){
    int ch;
    printf("\nEnter choice ->\n 1. By Id\n 2. By Title\n");
    scanf("%d",&ch);
    if(ch == 1){
        printf("Enter id you want to print -> \n");
        int id, flag = 0;
        scanf("%d",&id);
        for(int i =0; i<n; i++){
            if(books[i].id == id){
                printf("Title of book -> %s \n",books[i].title);
                printf("Author of book -> %s \n",books[i].author);
                printf("Publisher of book -> %s \n",books[i].publisher);
                printf("Price of book -> %f \n",books[i].price);
                printf("No of pages of book -> %d \n",books[i].noOfPages);
                printf("Year of release of book -> %d \n",books[i].yearOfRelease);
                printf("\n\n");
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            printf("\n You entered wrong id. Id is not present. \n");
    }else if(ch  == 2){
        printf("Enter title you want to print -> \n");
        char title[50]="";
        int flag = 0;
        scanf("%s",&title);
        for(int i =0; i<n; i++){
            if(strcmp(books[i].title, title) == 0){
                printf("Title of book -> %s \n",books[i].title);
                printf("Author of book -> %s \n",books[i].author);
                printf("Publisher of book -> %s \n",books[i].publisher);
                printf("Price of book -> %f \n",books[i].price);
                printf("No of pages of book -> %d \n",books[i].noOfPages);
                printf("Year of release of book -> %d \n",books[i].yearOfRelease);
                printf("\n\n");
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            printf("\n You entered wrong title. Title is not present. \n");

    }else{
        printf("\n You entered wrong choice\n");
    }
}
