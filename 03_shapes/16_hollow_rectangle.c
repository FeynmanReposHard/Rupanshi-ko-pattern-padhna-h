/* Hollow rectangle
 * Source inspiration: COneShotPart4.pdf, slide/page 21.
 * Reconstructed standalone solution; not a verbatim PDF transcription.
 * Change rows and cols to resize.
 */
#include <stdio.h>

int main(void) {
    int rows=4, cols=6;
    for(int i=1;i<=rows;i++){for(int j=1;j<=cols;j++)putchar(i==1||i==rows||j==1||j==cols?'*':' ');putchar('\n');}
    return 0;
}
