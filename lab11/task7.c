#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct library {
    char author_name[30];
    char book_title[30];
    int accession_num;
    bool issued;
} library;

int main() {
    int totalbooks=5;
    // initialization of books
    library books[5] = {
        {"fahad", "Let US C", 2020, false},
        {"fahad", "How to program C", 2021, false},
        {"abdul rehman", "Let US C", 2022, false},
        {"raghib", "Let US C", 2023, false},
        {"umar", "mat parhoo", 2024, false}
    };

    // printing all books store in the library
    for (int i = 0; i < 5; i++) {
        printf("\nBook %d\n", i + 1);
        printf("Author Name: %s\n", books[i].author_name);
        printf("Book Title : %s\n", books[i].book_title);
        printf("Accession Number: %d\n", books[i].accession_num);
        printf("Issue Status : %s\n\n", books[i].issued ? "true" : "false");
    }

    // searching for a particular author's books
    char pauthor[30];
    printf("Enter a particular author:\n");
    scanf("%s", pauthor);

    for (int j = 0; j < 5; j++) {
        if (strcmp(books[j].author_name, pauthor) == 0) {
            printf("Book: %s\n", books[j].book_title);
        }
    }

    // searching for a particular title book
    char ptitle[30];
    printf("Enter a particular book title:\n");
    scanf(" %[^\n]", ptitle);
    int countbooks = 0;
    for (int k = 0; k < 5; k++) {
        if (strcmp(books[k].book_title, ptitle) == 0) {
            countbooks++;
        }
    }
    printf("\n %d books are available for this particular title", countbooks);

    // issuing book
    char issuebook[30];
    printf("\nWhich book you want to issue? Enter title: ");
    scanf(" %[^\n]", issuebook);

    for (int k = 0; k < 5; k++) {
        if (strcmp(books[k].book_title, issuebook) == 0) {
            books[k].issued = true;
            totalbooks--;
        }
    }
    
    printf(" book issued remainig books in library %d", totalbooks);
    return 0;
}

