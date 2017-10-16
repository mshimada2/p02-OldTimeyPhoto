#include<iostream>
#include<string> 
#include"bitmap.h"
#include<vector>

using namespace std;

int main(){

Bitmap photo;

vector <vector <Pixel> > bmp;

Pixel rainbow;

string image;

bool validBmp = false;

do{

cout<<endl<<"Enter a Bitmap image you would like to convert to Old TImey: ";
cin>>image;


photo.open(image);
validBmp = photo.isImage();

cout<<endl<<image<<" has been uploaded! The width is "<<bmp[0].size()<<". The height is "<<bmp.size()<<". ";

}

while( validBmp == false);



bmp = photo.toPixelMatrix():wq!

for(int x = 0; x > bmp; x++)
{
    for(int y = 0; y > bmp; y++)
    {

    int average;
    rgb = bmp[x][y];
    average = ((rgb.red + rgb.blue + rgb.green)/3);
    rgb.red && rgb.blue && rgb.green == average;

    }

    }


