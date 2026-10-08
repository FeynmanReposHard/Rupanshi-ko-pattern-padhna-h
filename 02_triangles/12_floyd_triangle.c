/* Floyd's triangle
 * Source inspiration: COneShotPart4.pdf, slide/page 23.
 * Reconstructed standalone solution; not a verbatim PDF transcription.
 * Change n to resize (use n <= 9 for single-digit/letter patterns).
 */
#include <stdio.h>

int main(void) {
    int n=4;
    int value=1;for(int i=1;i<=n;i++){for(int j=1;j<=i;j++)printf("%d%s",value++,j==i?"":" ");putchar('\n');}
    return 0;
}
