/*
	This program is used to generate the postion of each value insde the magic square
*/

#include <iostream.h>
#include <conio.h>
#include <math.h>

int main(){
	 int s,row,col,size;
	 clrscr();
	 do{cout<<"Enter an odd value"<<endl; //this valus must be odd to create the magaic square
	 cin>>s;

	 }while(!(s%2) && s > 0); //a do while  loop to make sure the value is postive and an odd number
	 row=1;
	 col=(s+1)/2;
	 cout<<"value	row	col."<<endl;
	 cout<<"1	"<<row<<"	"<<col<<endl;
	 size=pow(s,2); //the total number of elemnts is the input square
	 for(int v=2;v<=size;v++){ //for loop for checking the postion of the values
	 if((v-1)%s){
	  row--;
	  col--;
	  if(row<1){ 
	  row=s;
	  }
	  if(col<1){
	  col=s;
	  }

	 }
	 else{
	 row++;
	 }
	 cout<<v<<"	"<<row<<"	"<<col<<endl;
	 }
	 cout<<"Enter any char to exit!"; 

	 getch();

	return 0;}