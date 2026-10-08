/* Descending star triangle
 * Source inspiration: COneShotPart4.pdf, slide/page 8.
 * Reconstructed standalone solution; not a verbatim PDF transcription.
 * Change n to resize (use n <= 9 for single-digit/letter patterns).
 */
#include <stdio.h>

int main(void) {
    int n=4;
    for(int i=n;i>=1;i--){for(int j=1;j<=i;j++)printf("*");putchar('\n');}
    return 0;
}
