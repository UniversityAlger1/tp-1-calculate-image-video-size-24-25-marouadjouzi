#include "config/grayScaleImage.h"
#include <stdio.h>

// Parameters:
//   w: width of the image
//   h: height of the image
// Return value
//   grayScale size of the image Bitmap (in byte)
float grayScaleImage(int w, int h) {
    // Calculate the size of the grayscale image in bytes
    float size = (float)(w * h);  // Each pixel is 1 byte
    return size;
}
