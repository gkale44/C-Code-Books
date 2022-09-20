#include "main.h"

int main()
{
    printf("\nInsert how many books you want to insert ->\n");
    int book_count;
    scanf("%d",&book_count);
    bk books[book_count];
    add_books(books, book_count);

    int ch;
    while(1){
            printf("\n 1. Display Books\n 2. Display Special record \n 3. Average price of the book \n 4. Minimum Maximum price of the book \n 5. Maximum number of pages \n 6. minimum price by particular author \n 7. Count of a book in specific year\n 8. Exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                print_books(books, book_count);
                break;
            case 2:
                display_special_record(books, book_count);
                break;
            case 3:
                avg_price_of_book(books, book_count);
                break;
            case 4:
                min_max_price(books, book_count);
                break;
            case 5:
                max_no_of_page(books, book_count);
                break;
            case 6:
                min_price_by_perticular_author(books, book_count);
                break;
            case 7:
                count_book_in_specific_year(books, book_count);
                break;
            case 8:
                return 0;
        }
    }
    return 0;
}
