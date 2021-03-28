#include <stdio.h>

struct bank_account {
    int account_no;
    int total_money;
};

void display_account_details(struct bank_account *acc) {
    printf("\n\nA/C No: %d\n", acc->account_no);
    printf("Total money: %d\n", acc->total_money);
}

int main() {
    struct bank_account my_acc;

    my_acc.account_no  = 12345;
    my_acc.total_money = 1000;

    display_account_details(&my_acc);

    return 0;
}