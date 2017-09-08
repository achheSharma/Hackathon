#include <iostream>
using namespace std;
int square[9];
int checkWin() {
if( square[0]  == square[1]  && square[1]  == square[2] ){
return 1 ;
}
else if( square[3]  == square[4]  && square[4]  == square[5] ){
return 1 ;
}
else if( square[6]  == square[7]  && square[7]  == square[8] ){
return 1 ;
}
else if( square[0]  == square[3]  && square[3]  == square[6] ){
return 1 ;
}
else if( square[1]  == square[4]  && square[4]  == square[7] ){
return 1 ;
}
else if( square[2]  == square[5]  && square[5]  == square[8] ){
return 1 ;
}
else if( square[0]  == square[4]  && square[4]  == square[8] ){
return 1 ;
}
else if( square[2]  == square[4]  && square[4]  == square[6] ){
return 1 ;
}
else if( square[0]  != 1 && square[1]  != 2 && square[2]  != 3 && square[3]  != 4 && square[4]  != 5 && square[5]  != 6 && square[6]  != 7 && square[7]  != 8 && square[8]  != 9){
return 1 ;
}
else{
return 2 ;
}
}
int board() {
system("CLS");
cout << "\n\n\tTic Tac Toe\n\n" ; 
cout << "Player 1 (x) - Player 2 (O) \n\n" ; 
cout << "\t" << square [0] << "|" << square [1] << "|" << square [2] << "\n" ; 
cout << "\t_|_|_\n" ; 
cout << "\t | | \n" ; 
cout << "\t" << square [3] << "|" << square [4] << "|" << square [5] << "\n" ; 
cout << "\t_|_|_\n" ; 
cout << "\t | | \n" ; 
cout << "\t" << square [6] << "|" << square [7] << "|" << square [8] << "\n" ; 
cout << "\t | | \n" ; 
return 0 ;
}
int main() {
int j = 0 ;
while ( j < 9){
square[j] = j + 1;
 j = j + 1;
}
int player = 1 ;
int i = 2 ;
int choice ;
int mark ;
while ( i == 2){
board() ;
cout << "Player " << player << ", Enter a number: " ; 
cin >> choice ;
if( player == 1){
 mark = 11;
}
else if( player == 2){
 mark = 0;
}
if( choice == 1 && square[0]  == 1){
square[0] = mark;
}
else if( choice == 2 && square[1]  == 2){
square[1] = mark;
}
else if( choice == 3 && square[2]  == 3){
square[2] = mark;
}
else if( choice == 4 && square[3]  == 4){
square[3] = mark;
}
else if( choice == 5 && square[4]  == 5){
square[4] = mark;
}
else if( choice == 6 && square[5]  == 6){
square[5] = mark;
}
else if( choice == 7 && square[6]  == 7){
square[6] = mark;
}
else if( choice == 8 && square[7]  == 8){
square[7] = mark;
}
else if( choice == 9 && square[8]  == 9){
square[8] = mark;
}
else{
cout << "Invalid Move" ; 
 player = player - 1;
}
i = checkWin() ;
if( i == 2){
if( player == 1){
 player = 2;
}
else if( player == 2){
 player = 1;
}
else if( player == 0){
 player = 1;
}
}
}
board() ;
if( i == 1){
cout << "==> Player " << player << " Win " ; 
}
else{
cout << "==> Game Draw\n " ; 
}
}
