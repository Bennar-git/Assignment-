﻿//user input for the book struct
/*
Name:Benard kimani
Reg No:CT101/G/23293/24
*/

#include <stdio.h>
#include <string.h>

	struct book {
		char title[30];
		char author[30];
		int publication_year;
		char ISBN[13];
		float price;
		} book1,book2;

int main(){
	struct book book1,book2;
   strcpy(book1.title,"Introduction to C programming");
	strcpy(book1.author,"John Smith");
	book1.publication_year = 2022;
	strcpy(book1.ISBN,"9780131103627");
	book1.price = 49.99;
	
   
   printf("Enter book title:");
   scanf("%s",&book1.title);
   printf("Enter the book author:");
   scanf("%s",&book1.author);
   printf("Enter the publication year:");
   scanf("%d",&book1.publication_year);
   printf("Enter the ISBN :");
   scanf("%s",&book1.ISBN);
   printf("Enter the book price:");
   scanf("%f",&book1.price);
   
     printf("\n\nBook title is:%s\n",book1.title);
   printf("The author is:%s\n",book1.author);
   printf("The year of publication is:%d\n",book1.publication_year);
   printf("The ISBN is:%s\n",book1.ISBN);
   printf("The book price is:%.2f\n",book1.price);
	return 0;
	}	
