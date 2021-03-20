void alter(int * pa, int * pb)
{
int temp;
temp = *pa + *pb;
*pb = *pa - *pb;
*pa = temp;
}
/*or*/
void alter(int * pa, int * pb)
{
*pa += *pb;
*pb = *pa - 2 * *pb;
}