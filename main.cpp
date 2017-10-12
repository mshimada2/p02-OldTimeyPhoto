#include<iostream>
#include<string> 
#include"bitmap.h"

using namespace std;


int main(){

//ask user for bitmap file
//use cout and cin for user input



Bitmap img;
vector <vector <Pixel> > bmp; 
Pixel rgb;  
 

//convert image to greyscale to look old timey 
img.open("machupicchu.bmp");
bmp = img.toPixelMatrix();

bool validBmp = img.isImage();

if(validBmp == true ){

    bmp = img.toPixelMatrix();




    rgb = bmp[0][0];
    rgb.red = 230; 
    rgb.green = 230;
    rgb.blue = 230;



    bmp[0][0] = rgb;
    img.fromPixelMatrix(bmp);
    img.save("machupicchu.bmp");

    }



cout<<endl<<"Machu Picchu has been uploaded! The width is "<<bmp[0].size()<<". The height is "<<bmp.size()<<". ";





return 0;

}
