/* Numbers with expanding central gap
 * Source inspiration: COneShotPart4.pdf, slide/page 40.
 * Reconstructed standalone solution; not a verbatim PDF transcription.
 * Change n to resize (use n <= 9 for single-digit/letter patterns).
 */
#include <stdio.h>

int main(void) {
    int n=4;
    for(int i=0;i<n;i++){for(int j=1;j<=n-i;j++)printf("%d",j);for(int j=0;j<2*i-1;j++)putchar(' ');for(int j=n+i+1;j<=2*n-1;j++)printf("%d",j);putchar('\n');}
    return 0;
}
