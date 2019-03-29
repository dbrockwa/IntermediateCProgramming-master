#include <stdio.h>
#include <stdlib.h>
#include "bmpfile.h"
#include "bmpfunc.h"
void BMP_unhide(BMP_Image *img) {
  BMP_color(img, 0);
}
