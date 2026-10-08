/* Centered star diamond (odd total rows)
 * Source inspiration: COneShotPart4.pdf, slide/page 37.
 * Reconstructed standalone solution; not a verbatim PDF transcription.
 * Use a positive odd n.
 */
#include <stdio.h>

int main(void) {
    int n=5;
    int middle=(n+1)/2;for(int i=1;i<=n;i++){int h=i<=middle?i:n-i+1;for(int j=1;j<=middle-h;j++)putchar(' ');for(int j=1;j<=2*h-1;j++)putchar('*');putchar('\n');}
    return 0;
}
