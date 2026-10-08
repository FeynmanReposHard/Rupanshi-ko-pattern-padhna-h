/* Palindromic alphabet pyramid (homework)
 * Source inspiration: COneShotPart4.pdf, slide/page 36.
 * Reconstructed standalone solution; not a verbatim PDF transcription.
 * Change n to resize (use n <= 9 for single-digit/letter patterns).
 */
#include <stdio.h>

int main(void) {
    int n=4;
    for(int i=1;i<=n;i++){for(int j=1;j<=n-i;j++)putchar(' ');for(int j=0;j<i;j++)putchar('A'+j);for(int j=i-2;j>=0;j--)putchar('A'+j);putchar('\n');}
    return 0;
}
