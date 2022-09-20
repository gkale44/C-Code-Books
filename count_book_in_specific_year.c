#include "count_book_in_specific_year.h"

void count_book_in_specific_year(bk *books, int n){
    printf("\n Enter which year you want to calculate books. \n");
    int year, count=0;
    scanf("%d",&year);

    for(int i =0; i<n; i++){
        if(books[i].yearOfRelease == year){
            count ++;
        }
    }
    if(count > 0)
        printf("\nCount the books releases in %d year ---  %d\n",year,count);
    else
        printf("You entered wrong year \n");
}
