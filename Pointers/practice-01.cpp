#include <iostream>
using namespace std;

void update1(int *p)
{
    *p = (*p) * 2;
}

void increment(int **p)
{
    ++(**p);
}

int main()
{

    // questions 01:
    cout << endl;
    char arr[] = "abcde";
    char *p = &arr[0];
    cout << p << endl; // p is equal to abcde;
    cout << endl;

    // questions 02:
    int first = 5;
    int second = 11;
    int *third = &second;                   // third is pointed by address of second
    first = *third;                         // value of first is stored in third
    *third = *third + 2;                    // then value of third is change to 13
    cout << first << " " << second << endl; // first is equal to 11 and second is 13
    cout << endl;

    // questions 03:
    int f = 110;
    int *q = &f;
    cout << *q << endl;
    (*q)++; // incremented by +1;
    cout << *q << endl;
    cout << endl;

    // questions 04:
    float fl = 12.3;
    float ft = 11.3;
    float *ptr = &fl;
    (*ptr)++;  // incremented by +1;
    *ptr = ft; // but ptr value is stored in ft that's why ft = 11.3;
    cout << fl << " " << ft << endl;
    cout << endl;

    // questions 04:
    int arr1[3] = {1, 2, 3};
    int *pt = arr1;
    cout << pt[2] << endl;
    *pt++; // that means *pt point to the arr1[0] and *pt++ means arr1[1]
    cout << *pt << endl;
    cout << endl;

    // questions = 05:
    int arr2[] = {11, 22, 33, 44, 55};
    cout << *(arr2) << " " << *(arr2 + 3) << endl;
    cout << endl;

    // questions 06:
    int arr3[] = {1, 22, 3, 44, 5};
    // int *pr = (arr3)++; //we can'nt update and change arr3 in simple table"
    //  cout << *pr << endl;
    cout << endl;

    // questions 07:
    char ch = 'a';
    char *chr = &ch;
    ch++;
    cout << *chr << endl; // ans is b;
    cout << endl;

    // questions 08:
    char arr4[] = "zxcvb";
    char *c = &arr4[0];
    cout << *c << endl; // ans is z;
    cout << endl;

    // questions 09:
    int n = 10;
    update1(&n);
    cout << n << endl;
    cout << endl;

    // questions 10:
    int fi = 110;
    int *pp = &fi;
    int **qq = &pp;
    int sec = (**qq)++ + 9;
    cout << fi << " " << sec << endl; // fi = 111 and sec = 120 or 119;
    cout << endl;

    // quesiton 11:
    int firstt = 100; // 102
    int *ppp = &firstt;
    int **qqq = &ppp;
    int secc = ++(**qqq); // 101
    int *r = &firstt;
    ++(*r); // 102
    cout << firstt << " : " << secc << " : " << *r << endl;
    cout << endl;

    // question 12:
    int num1 = 110;
    int *ptt = &num1;
    increment(&ptt);
    cout << num1 << endl;
    cout << endl;

    return 0;
}