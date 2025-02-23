#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void addBook();
void displayBooks();
void searchBook();
void deleteBook();

struct Book 
{
    int id;
    char title[100];
    char author[100];
    struct Book* next;
};

struct Book* head = NULL;

void addBook()
{
    struct Book* newBook = (struct Book*)malloc(sizeof(struct Book));

    printf("Enter Book ID: ");
    scanf("%d", &newBook->id);
    getchar();
    printf("Enter Book Title: ");
    fgets(newBook->title, sizeof(newBook->title), stdin);
    newBook->title[strcspn(newBook->title, "\n")] = '\0'; // Remove newline
    printf("Enter Book Author: ");
    fgets(newBook->author, sizeof(newBook->author), stdin);
    newBook->author[strcspn(newBook->author, "\n")] = '\0'; // Remove newline

    newBook->next = head;
    head = newBook;

    printf("Book added successfully!\n");
}

void displayBooks()
 {
      if (head == NULL)
      {
           printf("No books in the library.\n");
           return;
       }
      struct Book* temp = head;
      printf("\nBooks in the Library:\n");
      while (temp != NULL) 
     {
           printf("ID: %d, Title: %s, Author: %s\n", temp->id, temp->title, temp->author);
           temp = temp->next;
       }
}

void searchBook() 
{
    if (head == NULL) 
   {
        printf("No books in the library.\n");
        return;
    }
    int id;
    printf("Enter the Book ID to search: ");
    scanf("%d", &id);
    struct Book* temp = head;
    while (temp != NULL) 
   {
        if (temp->id == id) {
            printf("Book found! ID: %d, Title: %s, Author: %s\n", temp->id, temp->title, temp->author);
            return;
        }
        temp = temp->next;
    }
    printf("Book not found.\n");
}

void deleteBook()
{
    if (head == NULL)   
   {
        printf("No books in the library.\n");
        return;
   }
    int id;
    printf("Enter the Book ID to delete: ");
    scanf("%d", &id);
    struct Book* temp = head;
    struct Book* prev = NULL;
    if (temp != NULL && temp->id == id)
    {
        head = temp->next;
        free(temp);
        printf("Book deleted successfully!\n");
        return;
    }

    while (temp != NULL && temp->id != id)
    {
        prev = temp;
        temp = temp->next;
     }

    if (temp == NULL) 
   {
        printf("Book not found.\n");
        return;
    }
    prev->next = temp->next;
    free(temp);
    printf("Book deleted successfully!\n");
}

int main() 
{
    int choice;
    int flag;
    while (!flag) 
    {
        flag=0;
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Delete Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // To consume the newline character

        switch (choice) 
        {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                deleteBook();
                break;
            case 5:
                printf("Exiting...\n");
                flag=1;
                break;
            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
    } 
    return 0;
}