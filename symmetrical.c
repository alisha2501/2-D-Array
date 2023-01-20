//WAP to check whether a square matrix is symmetrical or not(matrix and transpose same)
#include<stdio.h>
int main()
{
      int a1[3][3]={{2,3,6},{3,4,5},{6,5,9}}, a[3][3]={0}, i, j, temp, c=0;
    for(i=0;i<3;i++){
		for(j=0;j<3;j++){
           a[i][j]=a1[j][i];
        }
    }
       for(i=0;i<3;i++){
        for(j=0;j<3;j++){
                if (a[i][j]==a1[i][j]){
                    continue;
                }
                else{
                    c++;
                    break;
                }
        }
    }
    if(c==0){
        printf("Symmetric Matrix \n");
    }
    else{
        printf("Not a Symmetric Matrix \n");
    }
    return 0;
}
