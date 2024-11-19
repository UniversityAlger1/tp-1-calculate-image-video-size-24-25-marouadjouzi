  GNU nano 7.2                    coloredBitmap.c                     Modified
#include <stdio.h>
#include <string.h>
#include <stddef.h> // Required for size_t

float coloredBitmap(int w, int h, const char* unit) {
    float size_in_bytes = w * h * 3; // 3 bytes per pixel for RGB

    if (strcmp(unit, "bt") == 0) {
        return size_in_bytes * 8; // Convert bytes to bits
    } else if (strcmp(unit, "ko") == 0) {
        return (size_in_bytes * 8) / 1000; // Convert bytes to kilobits
    } else if (strcmp(unit, "mo") == 0) {
        return (size_in_bytes * 8) / 1000000; // Convert bytes to megabits
    } else if (strcmp(unit, "go") == 0) {
        return (size_in_bytes * 8) / 1000000000; // Convert bytes to gigabits
    } else {
        fprintf(stderr, "Error: Unrecognized unit '%s'.\n", unit);
        return -1;
    }
}
