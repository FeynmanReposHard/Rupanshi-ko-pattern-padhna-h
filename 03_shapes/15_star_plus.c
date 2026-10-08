/* Star plus on a grid (odd n)
 * Source inspiration: COneShotPart4.pdf, slide/page 19.
 * Reconstructed standalone solution; not a verbatim PDF transcription.
 * Use a positive odd n.
 */
#include <stdio.h>

int main(void) {
    int n=5;
    for(int i=1;i<=n;i++){for(int j=1;j<=n;j++)putchar(i==(n+1)/2||j==(n+1)/2?'*':' ');putchar('\n');}
    return 0;
}
