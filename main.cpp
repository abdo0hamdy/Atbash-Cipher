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
// we create upper function 
void upper (string text ){
 // we declare varaibles that we will use it only in this function 
string result ;
char letter = 'e' ;
int Ascii ;
int position ;
int new_position ;
int new_Ascii ;
char new_letter ;
 // we make a for loop that loop of each element of string that the use input 
for(int x = 0 ; x < text.size() ; x++){
// we get this element and save it in a varaible
    letter = text[x] ;
// then we change him to his ascii number
       Ascii =  letter ;
// we chick her if he uppercase
       if (Ascii >= 65 && Ascii <= 90) {
        // we get here his position of upper letters and the first place is 0 not 1 
            position = Ascii - 65 ;
        // here we change the first letter with the last letter for example (a>>z) or (b>>y)
               new_position = 25 - position ;
        // we get the new ascii number of this postion 
                new_Ascii = new_position + 65 ;
        //then we change this ascii for the letter
               new_letter = new_Ascii ;



       }
 // this if statment we chick if there is spaces to print it 

       else if (Ascii == 32 ){
        new_letter = letter ;
       }
       result = result + new_letter ;
    }

cout << result << endl;

}
void lower(string text) {
// samething that we did in upper we will do it but in lowercase
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
 // we declare the class in the main that we made it above 
    encrypt encryptObject ;
string b ;
    string text ;
    char B ;
string text2 ;
cout << "1- Cipher a message"<< endl << "2- Decipher a message" << endl << "3- End" << endl ;
getline(cin,b) ;
 
if (b=="1"){
cout << "please enter your message that you want to cipher it " << endl << "notice you have to enter one of lowercase or uppercase ";
getline(cin,text) ;

char a ;
// in this for loop we chick the letter and send the right function to deal with it
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
else if (b=="2"){


string p ;
cout << "if you want to decipher another message enter 1 : " << endl ;
getline(cin ,p) ;
if (p=="1"){
cout << "please enter your message that you want to decipher it " << endl << "notice you have to enter one of lowercase or uppercase  :" << endl ;
getline(cin , text2) ;
for (int i = 0 ; i < text2.size() ; i ++ ){

    B= text2[i] ;
    if (isupper(B)) {
       encryptObject.upper(text2);

    }
     if (islower(B)) {
       encryptObject.lower(text2);
     }
break ;
}


}
}
 return 0 ;
}



