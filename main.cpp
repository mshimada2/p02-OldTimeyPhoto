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

bool validBmp = false;
//ask user for input image file

photo.open("machupicchu.bmp");
bmp = photo.toPixelMatrix();

cout<<endl<<"Machu Picchu has been uploaded! The width is "<<bmp[0].size()<<". The height is "<<bmp.size()<<". ";

do{
    cout<<"Enter a Bitmap image you would like to convert to Old Timey: ";
    cin>>image; 

    photo.open(image);
    validBmp = photo.isImage();

    }


    while(validBmp == false); 
    
    bitmap = picture.toPixelMatrix();

    int average
    rgb = bmp[x][y];
    ave = ((rgb.red + rgb.blue + rgb.green)/3);
    rgb.red && rgb.blue && rgb.green == average;





return 0;

}
