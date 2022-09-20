
#include <stdio.h>
#include <stdlib.h>

//#include "add_books.h"

typedef struct books{
    int id;
    char title[50];
    char author[50];
    char publisher[50];
    float price;
    int noOfPages;
    int yearOfRelease;
}bk;


void add_books(bk *, int n);
void print_books(bk*, int n);
void display_special_record(bk *, int n);
void avg_price_of_book(bk *, int n);
void min_max_price(bk *, int n);
void max_no_of_page(bk *, int n);
void min_price_by_perticular_author(bk *, int n);
void count_book_in_specific_year(bk *, int n);
