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

for(int x = 0; x < bmp; x++)
{

    for(int y = 0; y < bmp; y++)
    {

    int grey;
    
   rainbow = bmp[x][y];
   grey = ((rainbow.red + rainbow.blue + rainbow.green)/3);
   rainbow.red = grey;
    rainbow.blue = grey;
    rainbow.green = grey;
    


    }


    }
    
    
bmp[x][y] = rainbow;
photo.fromPixelMatrix(bmp);
photo.save("oldtimey.bmp");


return 0;

}



