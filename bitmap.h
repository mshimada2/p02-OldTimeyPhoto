#ifndef BITMAP_H
#define BITMAP_H

#include <string>
#include <vector>

// ----------------------------------------------------------------------------
/**
 * Represents a single Pixel in the image. A Pixel has red, green, and blue
  * components that are mixed to form a color. Each of these values can range
   * from 0 to 255
   **/
   class Pixel
   {
   public:
       // Stores the individual color components.
           int red, green, blue;

               // Initializes a Pixel with a default black color.
                   Pixel() : red(0), green(0), blue(0) { }

                       // Initializes a color Pixel with the specified RGB values.
                           Pixel(int r, int g, int b) : red(r), green(g), blue(b) { }
                           };

                           // ----------------------------------------------------------------------------
                           //To abbreviate a pixel matrix built as a vector of vectors
                           typedef std::vector < std::vector <Pixel> > PixelMatrix;

                           // ----------------------------------------------------------------------------
                           /**
                            * Represents a bitmap where a grid of pixels (in row-major order)
                             * describes the color of each pixel within the image. Limited to Windows BMP
                              * formatted images with no compression and 24 bit color depth.
                              **/
                              class Bitmap
                              {
                                private:
                                    PixelMatrix pixels;

                                      public:
                                          /**
                                               * Opens a file as its name is provided and reads pixel-by-pixel the colors
                                                    * into a matrix of RGB pixels. Any errors will cout but will result in an
                                                         * empty matrix (with no rows and no columns).
                                                              *
                                                                   * @param name of the filename to be opened and read as a matrix of pixels
                                                                       **/
                                                                           void open(std::string);
                                                                           "bitmap.h" 91L, 2862C


