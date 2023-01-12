#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

//צריכה שנתי יעבור איתי שוב על איך שמחשבים את הסיבוכיות לפני היפוך מחרוזת
//צריך לדעת שסיגמה אנ של אחד חלקי שתיים בחזקת איי זה 1
int main() { 
}

int fibo(int n) //פיבונאצי
{
    if(n==0 ||n==1)
    {
        return n;
    }
    return fibo(n-1)+fibo(n-2); //כי פיבונאצי 
}

void recursive_sort(int a[], int n){ //bubblt sort רקורסיבי
int i;
if(n<1)
}

int min(int a[], int n){ //מציאת מיינימום באמצעות רקורסיה
    if(n ==1)
    return a[0];
    int minrest = min(a+1,n-1);
    if(a[0]<minRest)
    return a[0];
    else{
        return minrest;
    }
    
}

int factorial( int num){ // עצרת!
    if (num ==1)
    return num; //תנאי עצירה
    return factorial(num-1)*num;

}

int binarySearch( int a[],int x, int left, int right){ //חיפוש בינארי רקוריבי
    if(left>right)
        return -1;
    int middle = (left+right)/2;
    if(a[middle]==x)
        return middle; //נגמר
    if(a[middle]>x)
    binarySearch(a,x,left,middle-1);
    else
    binarySearch(a,x,middle+1,right);
}



