/* Concentric number square
 * Source inspiration: COneShotPart4.pdf, slide/page 44.
 * Reconstructed standalone solution; not a verbatim PDF transcription.
 * Change n to resize (use n <= 9 for single-digit/letter patterns).
 */
#include <stdio.h>

int main(void) {
    int n=4;
    int size=2*n-1;for(int i=0;i<size;i++){for(int j=0;j<size;j++){int top=i,left=j,bottom=size-1-i,right=size-1-j;int d=top;if(left<d)d=left;if(bottom<d)d=bottom;if(right<d)d=right;printf("%d",n-d);}putchar('\n');}
    return 0;
}
