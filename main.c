#include<stdio.h>
#include<stdlib.h>

int main()
{
    long long male[51], female[50];
	int i, n;

	male[0] = 0;
	male[1]=1;
	male[2]=2;
	male[3] = 4;

	female[1] = 0;
	female[2] = 1;
	female[3] = 2;


	for (i = 4; i < 51; i++)
	{
	    int j = i;
        male[i] = male[j-1]+male[j-2]+1;
        female[i] = male[j-1];
	}

	while(scanf("%d",&n)==1 && n != -1) {

	    if(n == 0){
             printf("0 1\n");
	    }else{
	        printf("%llu", male[n]);
            printf(" %llu\n", male[n]+female[n]+1 );
	    }
	}
	return 0;
}
