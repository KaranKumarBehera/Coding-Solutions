#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            int p1=(tr[j].a+tr[j].b+tr[j].c)/2;
            int s1=(p1*(p1-tr[j].a)*(p1-tr[j].b)*(p1-tr[j].c))*.5;
            int p2=(tr[j+1].a+tr[j+1].b+tr[j+1].c)/2;
            int s2=(p2*(p2-tr[j+1].a)*(p2-tr[j+1].b)*(p2-tr[j+1].c))*.5;
            if(s1<s2)
            {
                
            }
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}