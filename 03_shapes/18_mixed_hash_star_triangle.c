/* Decreasing hash and increasing star
 * Source inspiration: COneShotPart4.pdf, slide/page 27.
 * Reconstructed standalone solution; not a verbatim PDF transcription.
 * Change n to resize (use n <= 9 for single-digit/letter patterns).
 */
#include <stdio.h>

int main(void) {
    int n=4;
    for(int i=1;i<=n;i++){for(int j=1;j<=n-i;j++)putchar('#');for(int j=1;j<=i;j++)putchar('*');putchar('\n');}
    return 0;
}
