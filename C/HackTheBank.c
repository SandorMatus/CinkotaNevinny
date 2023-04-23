#include <stdio.h>
#define __USE_GNU
#include <signal.h>
#include <string.h>
#include <wchar.h>
#include <stdlib.h>

typedef struct {
    char* name;
    char* surname;
    char* account_number;
    unsigned int debt;
}customer;

typedef struct {
    char number[8];
    unsigned int monthly_payment;
    short status;
}loan;

int menu()
{
    int c = 0;
    printf("Welcome to the Bank! Write the digit: \n 1 - Take a loan \n 2 - Change payment plan\n ");
    printf("3 - Exit the program.\n");
    while (c < 1 || c > 4)
    {
        c = 10;
        scanf("%d", &c);
        if (c >= 1 && c <= 5)
            return c;
        printf("You have written wrong digit. Please, write another one from the list.\n");
    }
}

int program()
{
    customer customer;
    customer.name = "Papa";
    customer.surname = "Johns";
    customer.account_number = "6573892365012641359";
    customer.debt = 50000;
    loan loans;
    strcpy(loans.number, "EN5567C");
    loans.monthly_payment = 700;
    loans.status = 0;
    int c = menu();
    switch (c)
    {
    case 1:
    {
        printf("How much you want to loan ?\n");
        int val;
        scanf("%d", &val);
	printf("Debt now is: %d\n", customer.debt);
	customer.debt += (loans.monthly_payment/100) * val;
	printf("Debt after taking loan is %d\n", customer.debt);
	break;
    }
    case 2:
    {
	printf("Account number is: %s\n", loans.number);
	printf("Monthly payment is: %d\n", loans.monthly_payment);
	printf("Type new number. Only 8 symbols!\n");
        char *newnum;
        printf("Step 0 success!\n");
        scanf("%s", &newnum);
        printf("Step 1 success!\n");
        memcpy(loans.number, &newnum, sizeof(newnum));
        printf("Step 2 success!\n");
        printf("Account number is: %s\n", loans.number);
	printf("Size of loan is: %d\n", loans.monthly_payment);
        break;
    }
    case 3:
    {

        printf("Exiting...");
        exit(0);

    }
    }

    return c;

}

void sighandler (int signo, siginfo_t *info, void *context) {
    ucontext_t *uc = (ucontext_t *)context;

    int instruction_length = 2; // The length of the "instruction" to skip

    uc->uc_mcontext.gregs[REG_RIP] += instruction_length;
}

wchar_t* s_2411641058()
{
wchar_t* _2411641058 = malloc(sizeof(wchar_t) * 32);

    asm("ud2"); // Adding an illegal opcode

    _2411641058[0x9] = 116; 
    _2411641058[0x3] = 0101 + 0xF;
    _2411641058[0x1e] = L'h' - 04; 
    _2411641058[0x4] = 114; 
    _2411641058[0x1] = 062 + 0x11; 
    _2411641058[0xc] = 'g' - 0x47;
    _2411641058[0x16] = 119; 
    _2411641058[0xe] = L'8' + 066;
    _2411641058[0x12] = 107; 
    _2411641058[0x10] = 062 + 0x31; 
    _2411641058[0x11] = 'g' - 0x47; 
    _2411641058[0x1b] = L'G' + 033;
    _2411641058[0xb] = 'g' - 0x47;
    _2411641058[0x13] = L'6' + 067; 
    _2411641058[0x6] = 0106 + 0x24;  
    _2411641058[0x1c] = L')' + 0110;
    _2411641058[0x7] = 062 + 0x33; 
    _2411641058[0x19] = L'g' - 05;
    _2411641058[0xd] = 'g' - 0x47;
    _2411641058[0x17] = 0116 + 0x16;
    _2411641058[0x8] = 062 + 0x31;  
    _2411641058[0x1f] = L'x' - 0x7;
    _2411641058[0x1a] = 107;
    _2411641058[0x1d] = 076 + 0x2d;
    _2411641058[0x18] = 0141 + 0x1; 
    _2411641058[0x5] = 0106 + 0x29;  
    _2411641058[0x14] = 0137 + 0x1b; 
    _2411641058[0x15] = 057 + 0x41; 
    _2411641058[0xa] = 0;
    _2411641058[0x0] = 73; 
    _2411641058[0xf] = 'g' - 0x47;
    _2411641058[0x2] = L'4' - 03;  
    _2411641058[0x1f] = L'\0';
    return _2411641058;
}
int main(){
    struct sigaction sa;
	memset(&sa, 0, sizeof(struct sigaction));
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = SA_SIGINFO;
	sa.sa_sigaction = sighandler;
	sigaction(SIGILL, &sa, NULL);
    wchar_t* str = s_2411641058();
    wchar_t input_str[100];
    printf("Enter password: ");
    scanf("%ls", &input_str);
    if (wcscmp(str, input_str) == 0) {
        printf("Good job\n");
        int prog_end = 0;
    	while (prog_end == 0)
    	{
           program();
    	}
    } else {
        printf("Incorrect password, try again :)\n");
    }
    return 0;
}

