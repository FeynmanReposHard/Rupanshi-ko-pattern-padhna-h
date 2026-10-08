/* Solid rectangle
 * Source inspiration: COneShotPart4.pdf, slide/page 2.
 * Reconstructed standalone solution; not a verbatim PDF transcription.
 * Change rows and cols to resize.
 */
#include <stdio.h>

int main(void) {
    int rows=3, cols=5;
    for (int i=1;i<=rows;i++) { for(int j=1;j<=cols;j++) printf("*"); putchar('\n'); }
    return 0;
}
