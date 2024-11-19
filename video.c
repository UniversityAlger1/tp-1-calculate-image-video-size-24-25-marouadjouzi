#include <string.h>
#include <stdio.h>

// Function to calculate video size
float video(int w, int h, int durationMovie, int durationCredits, int fps, const char* unit) {
    // Calculate sizes
    float colored_frame_size = w * h * 3; // Size per colored frame in bytes
    float bw_frame_size = w * h;           // Size per B/W frame in bytes

    // Total frames
    int total_colored_frames = durationMovie * fps;
    int total_bw_frames = durationCredits * fps;

    // Total sizes in bytes
    float total_size_bytes = (colored_frame_size * total_colored_frames) + (bw_frame_size * total_bw_frames);

    // Convert to desired unit
    if (strcmp(unit, "bt") == 0) {
        return total_size_bytes; // Already in bytes
    } else if (strcmp(unit, "ko") == 0) {
        return (total_size_bytes * 8) / 1000; // Convert bytes to kilobits
    } else if (strcmp(unit, "mo") == 0) {
        return (total_size_bytes * 8) / 1000000; // Convert bytes to megabits
    } else if (strcmp(unit, "go") == 0) {
        return (total_size_bytes * 8) / 1000000000; // Convert bytes to gigabits
    } else {
        // If the unit is not recognized, return -1 or handle error appropriately
        return -1; // Indicate an error with an unrecognized unit
    }
}
