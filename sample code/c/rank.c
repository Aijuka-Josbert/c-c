#include <stdio.h>
#include <string.h>

#define SIZE 100

struct Contact {
    char name[50];
    char email[50];
    char phone[20];
};

struct Contact addContact(struct Contact list[], int *size) {
    struct Contact newContact;

    printf("Enter contact name: ");
    fgets(newContact.name, sizeof(newContact.name), stdin);
    newContact.name[strcspn(newContact.name, "\n")] = '\0';

    printf("Enter contact email: ");
    fgets(newContact.email, sizeof(newContact.email), stdin);
    newContact.email[strcspn(newContact.email, "\n")] = '\0';

    printf("Enter contact phone: ");
    fgets(newContact.phone, sizeof(newContact.phone), stdin);
    newContact.phone[strcspn(newContact.phone, "\n")] = '\0';

    list[*size] = newContact;
    (*size)++;

    return newContact;
}

void displayContact(struct Contact list[], int size) {
    int i;

    if (size == 0) {
        printf("No contacts found.\n");
        return;
    }

    printf("Name\tEmail\tPhone\n");
    for (i = 0; i < size; i++) {
        printf("%s\t%s\t%s\n", list[i].name, list[i].email, list[i].phone);
    }
}

int main() {
    struct Contact contacts[SIZE];
    int size = 0;
    int choice;

    while (1) {
        printf("\n\n1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addContact(contacts, &size);
                break;

            case 2:
                displayContact(contacts, size);
                break;

            case 3:
                exit(0);

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}