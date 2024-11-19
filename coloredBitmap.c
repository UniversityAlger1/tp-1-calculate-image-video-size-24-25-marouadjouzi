  GNU nano 7.2                    coloredBitmap.c                     Modified
#include <string.h>
#include "config/coloredBitmap.h"
// Parameters:
//   w: width of the image
//   h: height of the image
//   unit: Unit of the output value. It could be 'bt' bits, 'ko' kilobits, 'mo' megabits, 'go' gigabits
// Return value
//   colored image size Bitmap (based on the unit passed parameter)
float coloredBitmap(int w, int h, char* unit) {
    // Calculate the size in bytes
    float size_in_bytes = w * h * 3; // 3 bytes per pixel for RGB

    // Convert to desired unit
    if (strcmp(unit, "bt") == 0) {
        return size_in_bytes * 8; // Convert bytes to bits
    } else if (strcmp(unit, "ko") == 0) {
        return (size_in_bytes * 8) / 1000; // Convert bytes to kilobits
    } else if (strcmp(unit, "mo") == 0) {
        return (size_in_bytes * 8) / 1000000; // Convert bytes to megabits
    } else if (strcmp(unit, "go") == 0) {
        return (size_in_bytes * 8) / 1000000000; // Convert bytes to gigabits
    } else {
        // If the unit is not recognized, return -1 or handle error appropriately
        return -1;
    }
}

