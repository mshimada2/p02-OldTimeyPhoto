#include<iostream>
#include<string> 
#include"bitmap.h"
#include<vector>


using namespace std;


int main(){


//estabish values and tools needed to run the program

Bitmap photo;

vector <vector <Pixel> > bmp; 

Pixel rainbow;  
 
string image;

//ask user for input image file

photo.open("machupicchu.bmp");
bmp = photo.toPixelMatrix();

bool validBmp = photo.isImage();

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
