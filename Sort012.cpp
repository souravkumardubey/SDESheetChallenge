#include <bits/stdc++.h> 
void sort012(int *a, int n)
{
    int lo = 0 , hi = n - 1 , mid = 0;

    while (mid <= hi) {
        switch (a[mid]) {

            case 0:
                swap(a[lo++], a[mid++]);
                break;

            case 1:
                mid++;
                break;

            case 2:
                swap(a[mid], a[hi--]);
                break;
        }
    }
}
