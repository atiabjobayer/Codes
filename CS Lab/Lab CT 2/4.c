#include <stdio.h>

struct user {
    int account_no;
    char name[100];
    int balance;
};

void add_user(struct user[], int);
void display(struct user[], int);
void add(struct user[], int, int, int);

int main() {
    struct user data[20];
    int n, choice, account_no, amount, index;

    printf("Welcome to NITT Bank\n\n");
    printf("Number of users you want to add? : ");
    scanf("%d", &n);
    add_user(data, n);
    do {

        printf("\nMenu :\n");
        printf("Press 1 to display all user details.\n");
        printf("Press 2 to add money.\n");
        printf("Press 0 to exit\n");
        printf("\nEnter choice(0-2) : ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            display(data, n);
            break;
        case 2:
            printf("Enter account number : ");
            scanf("%d", &account_no);
            printf("Enter amount of money to add : ");
            scanf("%d", &amount);
            add(data, n, account_no, amount);
            break;
        }
    } while (choice != 0);

    return 0;
}

void add_user(struct user list[80], int s) {
    int i;
    for (i = 0; i < s; i++) {
        printf("\nEnter data for user #%d", i + 1);

        printf("\nEnter account no : ");
        scanf("%d", &list[i].account_no);
        fflush(stdin);
        printf("Enter name : ");
        scanf("%s", list[i].name);
        list[i].balance = 0;
    }
}

void display(struct user list[80], int s) {
    int i;

    printf("\n\nA/C No\tName\tBalance\n");
    for (i = 0; i < s; i++) {
        printf("%d\t%s\t%d\n", list[i].account_no, list[i].name,
               list[i].balance);
    }
}

int search(struct user list[80], int s, int number) {
    int i;

    for (i = 0; i < s; i++) {
        if (list[i].account_no == number) {
            return i;
        }
    }
    return -1;
}

void add(struct user list[], int s, int number, int amt) {
    int i = search(list, s, number);
    if (i == -1) {
        printf("User not found");
    }
    else {
        list[i].balance += amt;
    }
}