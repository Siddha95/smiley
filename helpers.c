#include "helpers.h"

void colorize(int height, int width, RGBTRIPLE image[height][width])
{
    // Change all black pixels to a color of your choosing
    RGBTRIPLE desiredColor;
    desiredColor.rgbtRed = 255; //Red component value
    desiredColor.rgbtGreen = 0; //Green component value
    desiredColor.rgbtBlue = 0; //Blue component value

    //Iterate over each pixel in the image
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // Check if the pixel is black
            if (image[i][j].rgbtRed == 0 && image[i][j].rgbtGreen == 0 && image[i][j].rgbtBlue == 0)
            {
                image[i][j] = desiredColor;
            }
        }
    }
}
