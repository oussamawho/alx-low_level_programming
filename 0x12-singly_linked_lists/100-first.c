#include <stdio.h>
void pre_main_message(void);
/* Define a global variable to indicate whether the message has been printed */
int message_printed = 0;
int main(void)
{
/* Call the pre_main_message function before executing main */
pre_main_message();
/* Rest of the main function */
printf("This is the main function.\n");

return (0);
}

/* Define a function to print the message before main */
void pre_main_message(void)
{
if (!message_printed)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
message_printed = 1;
}
}
