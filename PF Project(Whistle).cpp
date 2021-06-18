/*
Abdullah Basharat 20i-2446
Ibrahim Bin Umair 20i-0567
Fatima Asim 20i-0847
*/
	
//A core program for printing firewroks in a shape of whistle breeze.
#include<iostream>
#include <windows.h>
using namespace std;

void Whistle1_Space(char whistle1[30][17]); //Function for adding spaces & clearing the garbage value.
void Whistle2_space(char whistle2[30][17]); //Function for adding spaces & clearing the garbage value.
void Whistle3_space(char whistle3[30][17]); //Function for adding spaces & clearing the garbage value.
void print_whistle(char whistle1[30][17],char whistle2[30][17],char whistle3[30][17]); //Function for printing the Whistles!
void print_line( int i,int j); //Function for calling line after fireworks.

int main()
{
int i,j;
char whistle1[30][17],whistle2[30][17],whistle3[30][17]; //Declaration  of the Arrays!
Whistle1_Space(whistle1); // Calling Space Function(1)
Whistle2_space(whistle2);// Calling Space Function(2)
Whistle3_space(whistle3);// Calling Space Function(3)

	whistle1[0][5]='*'; // Giving Cordinates in the first Array(Whistle1)
	whistle1[1][4]='*';
	whistle1[2][3]='*';
	whistle1[3][2]='*';
	whistle1[3][1]='*';
	whistle1[4][1]='*';
	whistle1[5][1]='*';
	whistle1[5][4]='*';
	whistle1[6][1]='*';
	whistle1[6][3]='*';
	whistle1[7][1]='*';
	whistle1[7][2]='*';
	whistle1[8][1]='*';
	whistle1[9][2]='*';
	whistle1[9][1]='.';
	whistle1[10][3]='*';
	whistle1[11][4]='*';
	whistle1[11][1]='|';
	whistle1[12][3]='*';
	whistle1[12][4]='.';
	whistle1[13][2]='*';
	whistle1[13][1]='.';
	whistle1[14][1]='*';
	whistle1[14][4]='.';
	whistle1[15][0]='*';
	whistle1[15][1]='|';
	whistle1[16][1]='*';
	whistle1[16][4]='.';
	whistle1[17][2]='*';
	whistle1[17][1]='.';
	whistle1[18][2]='*';
	whistle1[19][2]='*';
	whistle1[20][2]='*';
	whistle1[21][2]='*';
	whistle1[22][3]='*';
	whistle1[23][3]='*';
	whistle1[24][4]='*';
	whistle1[25][4]='.';
	whistle1[26][5]='.';
	whistle1[27][5]='.';
	whistle1[28][6]='.';
	whistle1[29][7]='.';
	
	whistle2[0][10]='*'; // Giving Coordinates in the Second Array(Whistle2)
	whistle2[1][9]='*';
	whistle2[2][8]='*';
	whistle2[3][7]='*';
	whistle2[3][6]='*';
	whistle2[4][6]='*';
	whistle2[5][6]='*';
	whistle2[5][9]='*';
	whistle2[6][6]='*';
	whistle2[6][8]='*';
	whistle2[7][6]='*';
	whistle2[7][7]='*';
	whistle2[8][6]='*';
	whistle2[9][7]='*';
	whistle2[9][6]='.';
	whistle2[10][8]='*';
	whistle2[11][9]='*';
	whistle2[11][6]='|';
	whistle2[12][8]='*';
	whistle2[12][9]='.';
	whistle2[13][7]='*';
	whistle2[13][6]='.';
	whistle2[14][6]='*';
	whistle2[14][9]='.';
	whistle2[15][5]='*';
	whistle2[15][6]='|';
	whistle2[16][6]='*';
	whistle2[16][9]='.';
	whistle2[17][7]='*';
	whistle2[17][6]='.';
	whistle2[18][7]='*';
	whistle2[19][7]='*';
	whistle2[20][7]='*';
	whistle2[21][7]='*';
	whistle2[22][7]='*';
	whistle2[23][7]='*';
	whistle2[24][7]='*';
	whistle2[25][7]='.';
	whistle2[26][7]='.';
	whistle2[27][7]='.';
	whistle2[28][7]='.';
	whistle2[29][7]='.';
	
	whistle3[0][15]='*'; // Giving Cordinates in the Third Array(Whistle3)
	whistle3[1][14]='*';
	whistle3[2][13]='*';
	whistle3[3][12]='*';
	whistle3[3][11]='*';
	whistle3[4][11]='*';
	whistle3[5][11]='*';
	whistle3[5][14]='*';
	whistle3[6][11]='*';
	whistle3[6][13]='*';
	whistle3[7][11]='*';
	whistle3[7][12]='*';
	whistle3[8][11]='*';
	whistle3[9][12]='*';
	whistle3[9][11]='.';
	whistle3[10][13]='*';
	whistle3[11][14]='*';
	whistle3[11][11]='|';
	whistle3[12][13]='*';
	whistle3[12][14]='.';
	whistle3[13][12]='*';
	whistle3[13][11]='.';
	whistle3[14][11]='*';
	whistle3[14][14]='.';
	whistle3[15][10]='*';
	whistle3[15][11]='|';
	whistle3[16][11]='*';
	whistle3[16][14]='.';
	whistle3[17][12]='*';
	whistle3[17][11]='.';
	whistle3[18][12]='*';
	whistle3[19][12]='*';
	whistle3[20][12]='*';
	whistle3[21][12]='*';
	whistle3[22][11]='*';
	whistle3[23][11]='*';
	whistle3[24][10]='*';
	whistle3[25][9]='.';
	whistle3[26][9]='.';
	whistle3[27][8]='.';
	whistle3[28][8]='.';
	whistle3[29][7]='.';

	
	print_whistle(whistle1,whistle2,whistle3); // Calling Function for printing the Array!
	print_line(i,j);  // Calling Function for printing the Array!
}
	void Whistle1_Space(char whistle1[30][17])
	{
		for (int i=0;i<=30;i++)
		{
			for (int j=0;j<=17;j++)
		    {
				whistle1[i][j]=' ';
			}
	  	}
	}
	void Whistle2_space(char whistle2[30][17])
	{
		for (int i=0;i<=30;i++) //
		{
			for (int j=0;j<=17;j++)
		    {
				whistle2[i][j]=' ';
			}
		}
	}
	void Whistle3_space(char whistle3[30][17])
	{
		for (int i=0;i<=30;i++)
		{
			for (int j=0;j<=17;j++)
    		{
				whistle3[i][j]=' ';
			}
		}
	}
	
	void print_whistle(char whistle1[30][17],char whistle2[30][17],char whistle3[30][17])
	{
		for(int i=0;i<=29;i++)
		{
			cout<<" ";
    	   {
				for (int j=0;j<=16;j++)
				{   Sleep(2);       		//Delaying the output for 2 seconds
					cout<<whistle1[i][j];
					Sleep(2);				//Delaying the output for 2 seconds
					cout<<whistle2[i][j];
					Sleep(2);				//Delaying the output for 2 seconds
				    cout<<whistle3[i][j];
				}
    	        cout<<" ";
			}
			cout<<endl;
    	}
	}
	void print_line( int i,int j) 			// Function for printing line.
	{
		
	for( i=1; i<21; i++) 					// For Rows
	{
		for( j=1; j<=24; j++) 				// For Columns
		{
			if(j==24)
			{
				Sleep(2);					//Delaying the output for 2 seconds
				cout<<"."<<endl;			
			}
			else
			{
				Sleep(2);			      //Delaying the output for 2 seconds
				cout<<" ";
			}
		}
	}
	}
	
