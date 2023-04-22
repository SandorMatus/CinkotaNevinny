#include <wchar.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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
    printf("3 - Save changes to the file.\n 4 - Find backup file if lost.\n 5 - Exit the program.\n");
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
/*
    case 3:
    {
	getchar();
	char *path = (char*) malloc(255);
	printf("Write the path where you want to save your file:\n");
        scanf("%s[^\n]", path);
        printf("Path achieved! It is: %s\n", path);
	char data[255] = { };
        snprintf(data, sizeof(data), "%s %s %s %hu \n%s %hu %hi", cust.name, cust.surname, cust.account_number, cust.debt, cars.number, cars.price_per_hour, cars.status);

	getchar();
	char prefix[255];
        printf("Please, write description about backup.\n");
	scanf("%[^\n]s", prefix);
        printf("Description achieved! It is: %s\n", prefix);
	char prefix_save[sizeof(path)+sizeof(prefix)+8];
	snprintf(prefix_save, 272, "echo %s > %s", prefix, path);
	system(prefix_save);

        printf ("%s\n\n", data);
        printf("Saving the file...\n\n");
        char to_save[sizeof(path)+sizeof(data)+17];
        snprintf(to_save, 272, "echo \"%s\" >> %s", data, path);
        printf("to_save var created! It looks like: %s\n", to_save);
        system(to_save);
        printf("File saved successfully\n");
       
	break;

    }

    case 4:
    {
    	printf("Input path you are searching file in: \n");
	getchar();
        char path[255];
        scanf("%[^\n]s", path);
        printf("Path achieved! It is: %s\n", path);
	char to_save[sizeof(path)+17];
        snprintf(to_save, sizeof(to_save), "sudo find %s", path);
	system(to_save);
	break;
    }
*/
    case 5:
    {

        printf("Exiting...");
        exit(0);

    }
    }

    return c;

}

wchar_t* s_2411641058()
{
wchar_t* _2411641058 = malloc(sizeof(wchar_t) * 32);
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
