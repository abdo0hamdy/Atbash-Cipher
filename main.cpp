 #include <iostream>

using namespace std;

int main()
{
#include <iostream>
#include <string>
#include<cstring>
#include<cctype>
using namespace std;
class encrypt {
public :
void upper (string text ){
string result ;
char letter = 'e' ;
int Ascii ;
int position ;
int new_position ;
int new_Ascii ;
char new_letter ;
for(int x = 0 ; x < text.size() ; x++){

    letter = text[x] ;

       Ascii =  letter ;

       if (Ascii >= 65 && Ascii <= 90) {
            position = Ascii - 65 ;
               new_position = 25 - position ;
                new_Ascii = new_position + 65 ;
               new_letter = new_Ascii ;



       }

       else if (Ascii == 32 ){
        new_letter = letter ;
       }
       result = result + new_letter ;
    }

cout << result << endl;

}
void lower(string text) {

string result = "" ;
char letter = 'e' ;
int Ascii ;
int position ;
int new_position ;
int new_Ascii ;
char new_letter ;



for(int x = 0 ; x < text.size() ; x++){

    letter = text[x] ;

       Ascii =  letter ;

       if (Ascii >= 97 && Ascii <= 122) {
            position = Ascii - 97 ;
               new_position = 25 - position ;
                new_Ascii = new_position + 97 ;
               new_letter = new_Ascii ;



       }

       else if (Ascii == 32 ){
        new_letter = letter ;
       }
result = result + new_letter ;
    }

cout << result << endl;

}
};


int main()
{
    encrypt encryptObject ;
int b ;
cout << "please choose one of them " << endl << "1- Cipher a message" << endl << "2- Decipher a message" << endl << "3- End" ;
cin >> b  ;
string text,text2 ;
cout << "please enter your message that you want to encrypt it " << endl << "notice you have to enter one of lowercase or uppercase ";
getline(cin,text) ;

char a ;
char b ;
for (int i = 0 ; i < text.size() ; i ++ ){
    a = text[i] ;
    if (isupper(a)) {
       encryptObject.upper(text);

    }
     if (islower(a)) {
       encryptObject.lower(text);

    }
break ;
}
int p ;
cout << "if you want to decrypt your message enter 1 : " << endl ;
cout << "if you want to decipher another message enter 2 : " << endl ;
cin >> p ;
if (p == 1 ){
    cout << text << endl ;
}

if (p==2){
    cout << "please enter your message that you want to decipher it " << endl << "notice you have to enter one of lowercase or uppercase ";
getline(cin,text2) ;
for (int i = 0 ; i < text.size() ; i ++ ){
    a = text[i] ;
    if (isupper(a)) {
       encryptObject.upper(text);

    }
     if (islower(a)) {
       encryptObject.lower(text);

    }
break ;
}

}
 return 0 ;
}

