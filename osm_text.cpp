#include"iostream"
#include"string.h"
using namespace std;
//It recieve the location of capital characters to print its corresponding special character
void SHOW(int initial,int final, int linenum,int coulum_num){
    char character[10][200]={{"    _     ____    ____  ____   _____  _____   ____  _   _  ___        _  _  __ _      __  __  _   _   ___   ____    ___   ____   ____   _____  _   _ __     ____        ____  ____   __ _____"},{"   / \\   | __ )  / ___||  _ \\ | ____||  ___| / ___|| | | ||_ _|      | || |/ /| |    |  \\/  || \\ | | / _ \\ |  _ \\  / _ \\ |  _ \\ / ___| |_   _|| | | |\\ \\   / /\\ \\      / /\\ \\/ /\\ \\ / /|__  /"},{"  / _ \\  |  _ \\ | |    | | | ||  _|  | |_   | |  _ | |_| | | |    _  | || ' / | |    | |\\/| ||  \\| || | | || |_) || | | || |_) |\\___ \\   | |  | | | | \\ \\ / /  \\ \\ /\\ / /  \\  /  \\ V /   / / "},{" / ___ \\ | |_) || |___ | |_| || |___ |  _|  | |_| ||  _  | | |   | |_| || . \\ | |___ | |  | || |\\  || |_| ||  __/ | |_| ||  _ <  ___) |  | |  | |_| |  \\ V /    \\ V  V /   /  \\   | |   / /_ "},{"/_/   \\_\\|____/  \\____||____/ |_____||_|     \\____||_| |_||___|   \\___/ |_|\\_\\|_____||_|  |_||_| \\_| \\___/ |_|     \\__\\_\\|_| \\_\\|____/   |_|   \\___/    \\_/      \\_/\\_/   /_/\\_\\  |_|  /____|"},{"                                                                                                                                                                                             "}};
for(int i=initial-1;i<final;++i)
cout<<character[coulum_num][i];
}
//it recieve the location of the small characters, numbers and special symbol to print its corresponding special symbol
void show(int initial,int final, int linenum,int coulum_num){
    char character[10][400]={{"        _                 _          __           _      _        _    _      _                                                           _                                                  ___   _      ____   _____  _  _    ____    __    _____   ___    ___  "},{"  __ _ | |__    ___    __| |  ___   / _|    __ _ | |__  (_)      (_)  | | __ | |     _ __ ___   _ __    ___   _ __    __ _  _ __   ___   | |_    _   _ __   ____      ____  __  _   _  ____ / _ \\ / |    |___ \\ |___ / | || |  | ___|  / /_  |___  | ( _ )  / _ \\ "},{" / _` || '_ \\  / __|  / _` | / _ \\ | |_    / _` || '_ \\ | |      | |  | |/ / | |    | '_ ` _ \\ | '_ \\  / _ \\ | '_ \\  / _` || '__| / __|  | __|  | | | |\\ \\ / /\\ \\ /\\ / /\\ \\/ / | | | ||_  /| | | || |      __) |  |_ \\ | || |_ |___ \\ | '_ \\    / /  / _ \\ | (_) |"},{"| (_| || |_) || (__  | (_| ||  __/ |  _|  | (_| || | | || |      | |  |   <  | |    | | | | | || | | || (_) || |_) || (_| || |    \\__ \\  | |_   | |_| | \\ V /  \\ V  V /  >  <  | |_| | / / | |_| || |     / __/  ___) ||__   _| ___) || (_) |  / /  | (_) | \\__, |"},{" \\__,_||_.__/  \\___|  \\__,_| \\___| |_|     \\__, ||_| |_||_|     _/ |  |_|\\_\\ |_|    |_| |_| |_||_| |_| \\___/ | .__/  \\__, ||_|    |___/   \\__|   \\__,_|  \\_/    \\_/\\_/  /_/\\_\\  \\__, |/___| \\___/ |_|    |_____||____/    |_|  |____/  \\___/  /_/    \\___/    /_/ "},{"                                           |___/               |__/                                          |_|        |_|                                                     |___/                                                                             "}};
for(int i=initial-1;i<final;++i)
cout<<character[coulum_num][i];
}


//it recieve the text, identify the character and call the show() function to show its corresponding special symbol
//it also pass the row and column so that the show() function fetch it corresponding special symbol from its dictionary (array)
void convert(char text[]){
    for(int j=0;j<6;++j){
    for(int i=0;i<strlen(text);++i){
        int char_to_ints=int(text[i]);
        if(char_to_ints>=65 && char_to_ints<=90){
            int char_to_int=char_to_ints-64;
            switch(char_to_int){
                case 1:SHOW(((char_to_int-1)*7)+1,((char_to_int-1)*7)+9,i,j);break;case 14 ... 21:SHOW(((char_to_int-1)*7)+3,((char_to_int-1)*7)+9,i,j);break;
                case 2 ... 8:SHOW(((char_to_int-1)*7)+3,((char_to_int-1)*7)+9,i,j);break;case 10:SHOW(((char_to_int-1)*7)+3,((char_to_int-1)*7)+9,i,j);break;
                case 9:SHOW(((char_to_int-1)*7)+3,((char_to_int-1)*7)+7,i,j);break;case 12:SHOW(((char_to_int-1)*7)+2,((char_to_int-1)*7)+8,i,j);break;case 11:SHOW(((char_to_int-1)*7)+3,((char_to_int-1)*7)+8,i,j);break;
                case 13:SHOW(((char_to_int-1)*7)+2,((char_to_int-1)*7)+9,i,j);break;case 22:SHOW(((char_to_int-1)*7)+3,((char_to_int-1)*7)+11,i,j);break;
                case 23:SHOW(((char_to_int-1)*7)+5,((char_to_int-1)*7)+16,i,j);break;case 24:SHOW(((char_to_int-1)*7)+10,((char_to_int-1)*7)+15,i,j);break;
                case 25:SHOW(((char_to_int-1)*7)+9,((char_to_int-1)*7)+15,i,j);break;case 26:SHOW(((char_to_int-1)*7)+9,((char_to_int-1)*7)+14,i,j);break;
            }
        }
        else{
            int char_to_int=char_to_ints-96;
        switch(char_to_int){
            case 1 ... 2:case 4:case 7 ... 8:show(((char_to_int-1)*7)+1,((char_to_int-1)*7)+7,i,j);break;case 14 ... 17:case 21 ... 22:show(((char_to_int-1)*7)+5,((char_to_int-1)*7)+11,i,j);break;case 25:show(((char_to_int-1)*7)+8,((char_to_int-1)*7)+14,i,j);break;
            case 3:case 5:case 11:show(((char_to_int-1)*7)+1,((char_to_int-1)*7)+6,i,j);break;case 18:show(((char_to_int-1)*7)+5,((char_to_int-1)*7)+10,i,j);break;case 24:show(((char_to_int-1)*7)+8,((char_to_int-1)*7)+13,i,j);break;
            case 6:case 10:show(((char_to_int-1)*7)+1,((char_to_int-1)*7)+5,i,j);break;case 19:case 20:show(((char_to_int-1)*7)+5,((char_to_int-1)*7)+9,i,j);break;case 26:show(((char_to_int-1)*7)+8,((char_to_int-1)*7)+12,i,j);break;
            case 9:case 12:show(((char_to_int-1)*7)+1,((char_to_int-1)*7)+3,i,j);break;
            case 13:show(((char_to_int-1)*7)+1,((char_to_int-1)*7)+11,i,j);break;
            case 23:show(((char_to_int-1)*7)+5,((char_to_int-1)*7)+14,i,j);break;
            case -64:cout<<" ";break;case -46:show(202,208,i,j);break;case -45:show(209,215,i,j);break;
            case -42:show(231,237,i,j);break;case -41:show(238,244,i,j);break;case -40:show(245,251,i,j);break;
            case -47:show(195,197,i,j);break;case -44:show(216,223,i,j);break;case -43:show(224,230,i,j);break;
            case -48:show(188,194,i,j);break;case -39:show(252,258,i,j);break;
           // case 
        }}
        }
    cout<<endl; 
    }

}

//main function only recieve the text and call the convert() function to convert the text
int main(){
    cout<<"\nenter text : ";
   char text[100];
    scanf(" %[^\n]",text);
    convert(text);
}