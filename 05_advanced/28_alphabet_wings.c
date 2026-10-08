/* Alphabet wings with expanding gap
 * Source inspiration: COneShotPart4.pdf, slide/page 42.
 * Reconstructed standalone solution; not a verbatim PDF transcription.
 * Change n to resize (use n <= 9 for single-digit/letter patterns).
 */
#include <stdio.h>

int main(void) {
    int n=4;
    for(int i=0;i<n;i++){for(int j=0;j<n-i;j++)putchar('A'+j);for(int j=0;j<2*i-1;j++)putchar(' ');for(int j=n+i;j<2*n-1;j++)putchar('A'+j);putchar('\n');}
    return 0;
}
