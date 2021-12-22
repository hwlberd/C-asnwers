#include <stdio.h>
int CheckPass(char pass[], int len)
{
int i,length=0;
int lengthCheck=0;
int numberCheck=0;
int upperCheck=0;
int lowerCheck=0;
int charcheck=0;

for(i=0;i<len;i++)
{
if(pass[i]!='\0')
length++;
else
break;
}
if(length>=8 && length<=16)
lengthCheck=1;
for(i=0;i<length;i++)
{
if(pass[i]>=48 && pass[i]<=57)
numberCheck=1;
else if(pass[i]>=97 && pass[i]<=122)
lowerCheck=1;
else if(pass[i]>=65 && pass[i]<=90)
upperCheck=1;
else if(pass[i]==33 || pass[i]==37)
charcheck=1;


}
if(lengthCheck && numberCheck && lowerCheck && upperCheck && charcheck)
return 1;
else
{
if(!lengthCheck)
printf("\nError: The length of the password must be between 8 and 16");
if(!numberCheck)
printf("\nError: There must be at least one number in your password");
if(!upperCheck)
printf("\nError: There must be at least one uppercase letter in yourpassword");
if(!lowerCheck)
printf("\nError: There must be at least one lowercase letter in yourpassword");
if(!charcheck)
printf("\nError: There must be at least one special char in yourpassword");
return 0;
}
}
int main() {
char password[30];
printf("Enter a password: ");
scanf("%s",&password);
if(CheckPass(password,30))
printf("Password format is correct.");
else
printf("\nPassword format is incorrect.");
return 0;
}