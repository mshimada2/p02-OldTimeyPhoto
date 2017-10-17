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




}

while(validBmp != true);

bmp = photo.toPixelMatrix();

cout<<endl<<image<<" has been uploaded. Its width is"<<bmp[0].size()<<" Its height is "<<bmp.size()<<" ."; 





return 0;

}



