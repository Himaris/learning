#include <stdio.h>

int is_prime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return 0;
    }
    return n > 1;
}


void factorize( int n, int* a, int* b )
{
    if (n == 1 && is_prime (n) == 1)
    {
        *a = 1;
        *b = n; 
    }
    else
    {
      for(int i = n; is_prime (n) == 0 && *a > 1 && *a <= *b; i = i/2)
                             {
             if ( *a * *b == n )
             {
                 *a = n;
                 *b = n/i;
             }
        }
     }
}
int a;
int b;
int x;
int i;
int j;
int read_int() {
    int n;
    scanf("%d", &n);
    return n;
}
int main (int x, int* a, int* b)
{	
	x = read_int();
      is_prime(x);
        if (x == 1 || is_prime (x) == 1)
    {
        *a = 1;
        *b = x;
        printf ("%d %d %d\n", x, *a, *b); 
    }
    else
	{ 	
     for(int i = 2; i<x; i = i+1)
        {	if ( x%i==0)
			*a = i;
			
			*b = x/i;
			break;
			
		}
		printf ("%d %d %d\n", x, *a, *b);
	}
}






