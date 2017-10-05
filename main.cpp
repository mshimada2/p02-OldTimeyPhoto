#include<iostream>
#include<string> 
#include"bitmap.h"

using namespace std;


int main(){

//ask user for bitmap file
//use cout and cin for user input



Bitmap img;
vector <vector <Pixel> > bmp; 
  
 

//convert image to greyscale to look old timey 
img.open("machupicchu.bmp");
bmp = img.toPixelMatrix(); 

cout<<endl<<"Machu Picchu has been uploaded! The width is "<<bmp[0].size()<<". The height is "<<bmp.size()<<". ";


return 0;

}
