void quicksort(int dau, int cuoi, long mang[])
{
    long mid = mang[(dau + cuoi)/2];
    int i = dau;
    int j = cuoi;
    do
    {
        while (mid > mang[i]) i++;
        while (mid < mang[j]) j--;
        if (i <= j)
            {
                swap(&mang[i],&mang[j]);
                i++; j--;
            }
    } while (i <= j);
    if (dau < j)
        quicksort(dau,j,mang);
    if (i < cuoi)
    quicksort(i,cuoi,mang);
}
void swap(long* a, long* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}