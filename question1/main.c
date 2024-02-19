#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   double x1,x2,y1,y2,d;

    FILE *infile,*outfile;

    infile = fopen("inf.txt", "r");
    outfile = fopen("outf.txt", "w");

    fscanf(infile, "%lf%lf",&x1,&x2);
    fscanf(infile, "%lf%lf",&y1,&y2);

    d = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));

    fprintf(outfile,"d=%f\n",d);

    close(infile);
    close(outfile);
    return 0;
}
