/*
 * Pattern 1 (Medium set): Right-aligned Descending Number Triangle
 * Idea: each row prints n - row spaces, then row down to 1.
 * Time: O(n^2) | Space: O(1)
 */

#include<stdio.h>  
int main(){
    int row, col, n;
    printf("Enter value of 'n': ");
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            printf(" ");
        }
        for(col=row;col>=1;col--){
            printf("%d",col);
        }
        printf("\n");
    }
    return 0;
}