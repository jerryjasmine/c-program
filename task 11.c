/*WRITE A C PROGRAM TO CREATE A STRUCTURE CALLED BOOK AND STORE THE TITLE, AUTHOR AND GENRE.
READ THESE VALUES FROM THE USER AND DISPLAY THEM BACK, USING FUNCTIONS.*/
#include<stdio.h>
#include<string.h>
struct book
{
    char t[10],a[10],g[10];
}b;
void read()
{
    printf("\nEnter the details of book: ");
    printf("\nTitle: ");
    gets(b.t);
    printf("Author: ");
    gets(b.a);
    printf("Genre: ");
    gets(b.g);}
void display()
{
  printf("\nDisplaying the details of book.....");
  printf("\nTitle: %s\nAuthor: %s\nGenre: %s",b.t,b.a,b.g);
}


void main()
{
    printf("TO CREATE A STRUCTURE CALLED BOOK AND STORE THE TITLE, AUTHOR AND GENRE.....");
  read();
  display();
}
