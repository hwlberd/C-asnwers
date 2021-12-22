#include <iostream>
using namespace std;
void printStrongNess(string& input) {
   int n = input.length();
   // Checking lower alphabet in string
   bool hasLower = false, hasUpper = false;
   bool hasDigit = false, specialChar = false;
   string normalChars = "abcdefghijklmnopqrstu" "vwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";
   for (int i = 0; i < n; i++) {
      if (islower(input[i]))
         hasLower = true;
      if (isupper(input[i]))
         hasUpper = true;
      if (isdigit(input[i]))
         hasDigit = true;
      size_t special = input.find_first_not_of(normalChars);
      if (special != string::npos)
         specialChar = true;
   }
   // Strength of password
   
   if (!(n >= 8 && n<=16)) 
      cout << "8-16 uzunlukta olmali" << endl;
    else if(!(hasDigit))
    cout<<"Rakam icermeli"<<endl;
    else if (!(hasLower || hasUpper))
      cout << "Büyük kücük harf icermeli" << endl;
    else if(!(specialChar)) 
    cout<<"Ozel karakter icermeli"<<endl;
   else
      cout << "Basarili" << endl;
}
int main() {
   string input;
   cout<<"Sifre giriniz:";
   cin>>input;
   printStrongNess(input);
   return 0;
}