/* Alphabet triangle
 * Source inspiration: COneShotPart4.pdf, slide/page 17.
 * Reconstructed standalone solution; not a verbatim PDF transcription.
 * Change n to resize (use n <= 9 for single-digit/letter patterns).
 */
#include <stdio.h>

int main(void) {
    int n=4;
    for(int i=1;i<=n;i++){for(int j=0;j<i;j++)printf("%c",'A'+j);putchar('\n');}
    return 0;
}
